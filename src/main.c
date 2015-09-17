#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "string.h"
#include "time.h"
#include "em_device.h"
#include "em_cmu.h"
#include "em_gpio.h"
#include "em_chip.h"
#include "unb.h"
#include "nwrm_uart.h"
#include "nwrm_cmu.h"
#include "nwrm_rtc.h"
#include "nwrm_printf.h"
#include "nwrm_flash.h"
#include "em_usart.h"

#define AT_PARSER  0
#define UART_2_RM    1

#define EXAMPLE_CODE  AT_PARSER

#ifndef EXAMPLE_CODE 
 #error "User example code is not defined"
#endif

#define LED_BLINKING



/* Counts 1ms timeTicks */
volatile uint32_t msTicks;
/* Counts 1ms timeTicks */
uint32_t sTicks;

//void Delay(uint32_t dlyTicks);

void delay(uint32_t dlyTicks);

void init_printf(void *putp, void (*putf)(void *, char), void (*start)(void *), void (*stop)(void *));
void tfp_printf(char *fmt, ...);

extern unsigned long FreqLow;
extern unsigned long FreqHigh;
bool led_blinking_enabled = true;

void SysTick_Handler(void)
{
	msTicks++;       /* increment counter necessary in Delay()*/
        sTicks++;
}
unsigned long msTicks_prev = 0;
void GPIO_ODD_IRQHandler(void)
{
  GPIO_IntClear(GPIO_IntGet());  
  if (msTicks - msTicks_prev > 77) 
  {
    msTicks_prev = msTicks;
    if (led_blinking_enabled == true) {
      led_blinking_enabled = false;
    }
     else 
     {
       led_blinking_enabled = true;
     }
  }
}

void GPIO_EVEN_IRQHandler(void)
{
  GPIO_IntClear(GPIO_IntGet());
  if (led_blinking_enabled) led_blinking_enabled = false;
   else led_blinking_enabled = true;  
}

void delay(uint32_t dlyTicks)
{
	uint32_t curTicks;
	
	curTicks = sTicks;
	while ((sTicks - curTicks) < dlyTicks) ;
}


uint8_t RSSI = 0;
uint8_t curRSSI = 0;
uint8_t SNR=0;



#define AT_MAX_LEN   256
#define RF_RANGE_LOW_END   858500000 
#define RF_RANGE_HIGH_END   925500000
char at_cmd_buffer[AT_MAX_LEN];

int i = 0;
unsigned int freq = 0;
unsigned int bandw = 0;


bool serial_valid;
bool send_data_valid;

struct t_send_buf_len
{
 unsigned char send_buffer[20];
 unsigned char len ;
} send_buf_len;

#if EXAMPLE_CODE==UART_2_RM
void uart_2_rm (void)
{
    int watch_c;        
    while ((watch_c = NWRM_UART_GetChar()) >= 0) {
    send_buf_len.send_buffer[i++] = watch_c;
     if (i >= 4) {      
         unsigned char packetRec[256];       
         //#warning "Set a proper frequency value for your environment"
	 /* NWAVE_Set_Frequency(866500000, 50000, 100); */
         /* NWAVE_Set_Frequency(868800000, 50000, 100); */
         /* NWAVE_Set_Frequency(916500000, 50000, 100); */
         NWAVE_send(send_buf_len.send_buffer, 4 /*send_buf_len.len*/ , packetRec, PROTOCOL_B);
         
         tfp_printf("Data sent.\n");
         i = 0;
     }
    }
}
#elif EXAMPLE_CODE==AT_PARSER
void at_cmd_parser(void)
{
    int watch_c;
    unsigned char temp1 = 0 ;   

    while ((watch_c = NWRM_UART_GetChar()) >= 0) {
      
        at_cmd_buffer[i++] = watch_c;
        
        if (i >= AT_MAX_LEN) {
            tfp_printf("Error\n");
            i = 0;
            watch_c = -1;
            break;
        }
       if (watch_c == 0xA) { 
        if ((at_cmd_buffer[0] == 'a') || (at_cmd_buffer[0] == 'A')) 
           {
             if (i > 1) {
                if ((at_cmd_buffer[1] == 't') || (at_cmd_buffer[1] == 'T')) {
                  if (i > 2) {
                    switch (at_cmd_buffer[2]) {
                        case '+':
                            switch (at_cmd_buffer[3]) {
                                case 'f':
                                case 'F':
                                  switch (at_cmd_buffer[4]) {
                                      case 'r':
                                      case 'R':
                                        switch (at_cmd_buffer[5]) {
                                            case 'e':
                                            case 'E':
                                              switch (at_cmd_buffer[6]) {
                                                  case 'q':
                                                  case 'Q':
                                                    switch (at_cmd_buffer[7]) {
                                                        case '=':

                                                          {
                                                            if (at_cmd_buffer[8] == '\n')   {
                                                              tfp_printf("Error\n");
                                                              break;
                                                            }  
                                                            else if (at_cmd_buffer[8] == '?')   {
                                                              
                                                                tfp_printf("FreqLow:%d FreqHigh:%d\n",FreqLow, FreqHigh);
                                                              //tfp_printf("freq:%d bandw:%d\n",freq, bandw);
                                                              break;
                                                            }  

                                                            unsigned char temp1 = 0 ;
                                                            unsigned char temp2 = 0 ;
                                                            while (at_cmd_buffer[temp1] != ',' ) {
                                                              if (at_cmd_buffer[temp1] == '\n') {
                                                               break;                                                              
                                                              }  
                                                              temp1++;
                                                            }
                                                              if (at_cmd_buffer[temp1] == '\n') {
                                                                tfp_printf("Error\n");
                                                                break;
                                                              }
                                                              freq = atoi((char *)(at_cmd_buffer + sizeof("AT+FREQ=") -1));

                                                              if ((freq < RF_RANGE_LOW_END) || (freq > RF_RANGE_HIGH_END)) {
                                                                tfp_printf("Error\n");
                                                                break;
                                                              }
                                                              
                                                              while (at_cmd_buffer[temp1 + temp2] != '\n' ) temp2++;
                                                              {
                                                                bandw = atoi((char *)(at_cmd_buffer + temp1 + 1));
                                                                if (bandw == 0) {  // Zero is a typical error code after attempt to convert letters
                                                                 tfp_printf("Error\n");
                                                                 break;
                                                                }
                                                                else if (((freq - bandw/2) < RF_RANGE_LOW_END) || ((freq + bandw/2) > RF_RANGE_HIGH_END) ) {
                                                                 tfp_printf("Error\n");
                                                                 break;
                                                                }  
                                                                else {                                                                         
                                                                     NWAVE_Set_Frequency(freq, bandw, 100); 
                                                                     tfp_printf("Ok\n");                                                                     
                                                                }
                                                              }  
                                                          }
                                                        break;
                                                        default: tfp_printf("Error\n");                                                        
                                                    }    
                                                  break;
                                                  default: tfp_printf("Error\n");                                                  
                                               }
                                            break;
                                            default: tfp_printf("Error\n");                                            
                                        }
                                      break;
                                      default: tfp_printf("Error\n");                                      
                                  }
                                break;
                                
                                case 'b':
                                case 'B':
                                  switch (at_cmd_buffer[4]) {
                                    case '=':
                                      if(at_cmd_buffer[5]=='y' || at_cmd_buffer[5]=='Y') {
                                        led_blinking_enabled = true; 
                                        tfp_printf("Ok\n"); 
                                      }
                                      else if(at_cmd_buffer[5]=='n' || at_cmd_buffer[5]=='N') {
                                        led_blinking_enabled = false;
                                        tfp_printf("Ok\n"); 
                                      }
                                      else tfp_printf("Error\n");
                                    break;
                                    default: tfp_printf("Error\n");
                                  }
                                  break;  
                                case 'r':
                                case 'R':
                                  switch (at_cmd_buffer[4]) {
                                    case 'c':
                                    case 'C':
                                      switch (at_cmd_buffer[5]) {
                                        case 'v':
                                        case 'V':                                
                                              switch (at_cmd_buffer[6]) {
                                                case '=':   
                                                  {
                                                    temp1 = sizeof("AT+RCV=") - 1;
                                                    unsigned char j = 0;
                                                    while (at_cmd_buffer[temp1] != '\n' ) 
                                                    {  
                                                      if (at_cmd_buffer[temp1 + 1] == '\n') break;
                                                      if (at_cmd_buffer[temp1] == '$')
                                                      {
                                                        unsigned char arr[3] = { 0,0,'\n'};
                                                        temp1++;
                                                        arr[0] = at_cmd_buffer[temp1++];
                                                        arr[1] = at_cmd_buffer[temp1++];
                                                        int dat;
                                                        sscanf((char *)arr, "%x", &dat);                                                         
                                                        send_buf_len.send_buffer[j++] = dat; 
                                                        send_buf_len.len = j;
                                                        if ( j > 20 ) {
                                                          tfp_printf("Error\n");
                                                        }
                                                      }
                                                      else {
                                                        tfp_printf("Error\n");
                                                      }
                                                    }
                                                    if (send_buf_len.len == 0) {
                                                      tfp_printf("Error\n");
                                                    }
                                                    else {
                                                      char packetRec[256]; 
                                                      unsigned char res = 0;
                                                      res = NWAVE_send(send_buf_len.send_buffer, send_buf_len.len, packetRec, PROTOCOL_E);
                                                      //tfp_printf("Res:%d\n", res);
                                                      if ((res > 0) && (res < 256)) { 
                                                        NWRM_UART_Send(packetRec, res);
                                                      }
                                                      else
                                                      {
                                                        init_printf(NWRM_UART_Init(9600, true, false),
                                                                  NWRM_UART_Putc,
                                                                  NWRM_UART_Start,
                                                                  NWRM_UART_Stop);                                                      
                                                        tfp_printf("Error\n");
                                                      }
                                                    }
                                                }
                                                break;
                                                default: tfp_printf("Error\n");                                                  
                                              }
                                              break;
                                              default: tfp_printf("Error\n");                                              
                                              }
                                            break;
                                            default: tfp_printf("Error\n");                                              
                                          }                                      
                                          break;                              
                                           
                                
                                case 's':
                                case 'S':
                                  switch (at_cmd_buffer[4]) {
                                    case 'e':
                                    case 'E':
                                      switch (at_cmd_buffer[5]) {
                                        case 'n':
                                        case 'N':
                                          switch (at_cmd_buffer[6]) {
                                            case 'd':
                                            case 'D':
                                              switch (at_cmd_buffer[7]) {
                                                case '=':   
                                                  {
                                                    send_data_valid = true; //and later maybe changed to false if input data is wrong
                                                    temp1 = sizeof("AT+SEND=") - 1;
                                                    unsigned char j = 0;
                                                    while (at_cmd_buffer[temp1] != '\n' ) 
                                                    {  
                                                      if (at_cmd_buffer[temp1 + 1] == '\n') break;
                                                      if (at_cmd_buffer[temp1] == '$')
                                                      {
                                                        unsigned char arr[3] = { 0,0,'\n'};
                                                        temp1++;
                                                        arr[0] = at_cmd_buffer[temp1++];
                                                        arr[1] = at_cmd_buffer[temp1++];
                                                        int dat;
                                                        sscanf((char *)arr, "%x", &dat);                                                         
                                                        send_buf_len.send_buffer[j++] = dat; 
                                                        send_buf_len.len = j;
                                                        if ( j > 20 ) {
                                                          tfp_printf("Error\n");
                                                        }
                                                      }
                                                      else {
                                                        tfp_printf("Error\n");
                                                        send_data_valid = false;
                                                        break;
                                                      }
                                                    }
                                                    if (send_buf_len.len == 0) {
                                                      tfp_printf("Error\n");
                                                    }
                                                    else if (send_data_valid == true){
                                                      unsigned char packetRec[256]; 
                                                      NWAVE_send(send_buf_len.send_buffer, send_buf_len.len, packetRec, PROTOCOL_B);
                                                      init_printf(NWRM_UART_Init(9600, true, false),
                                                                NWRM_UART_Putc,
                                                                NWRM_UART_Start,
                                                                NWRM_UART_Stop);                                                      
                                                      tfp_printf("Ok\n");
                                                    }
                                                }
                                                break;
                                                default: tfp_printf("Error\n");                                                  
                                              }
                                              break;
                                              default: tfp_printf("Error\n");                                              
                                          }                                      
                                          break;
                                        case 'r':
                                        case 'R':  
                                          switch (at_cmd_buffer[6]) {
                                            case 'i':
                                            case 'I':
                                              switch (at_cmd_buffer[7]) {                                              
                                                case 'a':
                                                case 'A':
                                                      switch (at_cmd_buffer[8]) {                                              
                                                        case 'l':
                                                        case 'L':
                                                          switch (at_cmd_buffer[9]) {                                              
                                                            case '=':
                                                              switch (at_cmd_buffer[10]) {                                              
                                                                case '?':
                                                                  {
                                                                    NWRM_DEVICE device;
                                                                    NWRM_FLASH_DeviceRead(&device); 
                                                                    unsigned char buffer[8];
                                                                    sprintf((char *)buffer, "%08x", device.Serial);
                                                                    tfp_printf((char *)buffer);
                                                                    tfp_printf("\n");
                                                                  }
                                                                break;
                                                                case '$':
                                                                  {
                                                                    serial_valid = true; //and later maybe changed to false if input data is wrong
                                                                    temp1 = sizeof("AT+SERIAL=") - 1;
                                                                    unsigned char j = 0;
                                                                    send_buf_len.len = 0;
                                                                    while (at_cmd_buffer[temp1] != '\n' ) 
                                                                    {  
                                                                      if (at_cmd_buffer[temp1 + 1] == '\n') break;
                                                                      if (at_cmd_buffer[temp1] == '$')
                                                                      {
                                                                        unsigned char arr[3] = { 0,0,'\n'};
                                                                        temp1++;
                                                                        arr[0] = at_cmd_buffer[temp1++];
                                                                        arr[1] = at_cmd_buffer[temp1++];
                                                                        int dat;
                                                                        sscanf((char *)arr, "%x", &dat);                                                         
                                                                        send_buf_len.send_buffer[j++] = dat; 
                                                                        send_buf_len.len = j;
                                                                        if ( j > 8 ) {
                                                                          tfp_printf("Error\n");
                                                                        }
                                                                      }
                                                                      else {
                                                                        tfp_printf("Error\n");
                                                                        serial_valid = false;
                                                                        break;
                                                                      }
                                                                    }                                                                    
                                                                    if (serial_valid)
                                                                    {
                                                                      NWRM_DEVICE device;
                                                                      device.Serial = 0;
                                                                      for (unsigned char z = 0; z < send_buf_len.len ; z++) {
                                                                        if (z > 0) device.Serial <<= 8;
                                                                        device.Serial |= *(unsigned char *)(send_buf_len.send_buffer + z); 
                                                                        
                                                                      }
                                                                      NWRM_FLASH_DeviceWrite(&device);
                                                                      NWRM_FLASH_DeviceRead(&device); 
                                                                      unsigned char buffer[8];
                                                                      sprintf((char *)buffer, "%08x", device.Serial);
                                                                      tfp_printf((char *)buffer);
                                                                      tfp_printf("\n");
                                                                    }
                                                                  }
                                                                break;                                                                
                                                                default: tfp_printf("Error\n"); 
                                                              }
                                                            break;                                                          
                                                            default: tfp_printf("Error\n");                                                            
                                                          }
                                                        break;
                                                        default: tfp_printf("Error\n");
                                                      }
                                                break;
                                                default: tfp_printf("Error\n");
                                              }
                                             break;
                                             default: tfp_printf("Error\n");
                                          }
                                        break;
                                        default: tfp_printf("Error\n");
                                      }                                      
                                      break;
                                      default: tfp_printf("Error\n");                                      
                                  }
                                break;
                                default: tfp_printf("Error\n");                                
                            }
                        break;
                        case 'b':
                        case 'B':
                            tfp_printf("MCU is going to Reset...\n");
                            /* Write to the Application Interrupt/Reset Command Register to reset
                             * the EFM32. See section 9.3.7 in the reference manual. */
                             SCB->AIRCR = 0x05FA0004;
                        break;                        
                        case 'z':
                        case 'Z':
                            tfp_printf("ATZ is not supported, use AT+FREQ=\n");
                        break;
                        default: tfp_printf("Error\n");                        
                    }
                  }
                }
                else {
                  tfp_printf("Error\n");
                }
            }
           }
        else {
          tfp_printf("Error\n");
        }
        i = 0;      
        break;
      }
    }
}
#endif

#ifdef LED_BLINKING

#define BSP_STATUS_OK                 0     /**< BSP API return code, no errors. */
#define BSP_STATUS_ILLEGAL_PARAM      (-1)  /**< BSP API return code, illegal input parameter. */
#define BSP_STATUS_NOT_IMPLEMENTED    (-2)  /**< BSP API return code, function not implemented (dummy). */
#define BSP_STATUS_UNSUPPORTED_MODE   (-3)  /**< BSP API return code, unsupported BSP mode. */

#define BSP_GPIO_LEDS
#define BSP_NO_OF_LEDS  1
typedef struct
{
  GPIO_Port_TypeDef   port;
  unsigned int        pin;
} tLedArray;

#define BSP_GPIO_LEDARRAY_INIT {{gpioPortC,15}}
static const tLedArray ledArray[ BSP_NO_OF_LEDS ] = BSP_GPIO_LEDARRAY_INIT;

int BSP_LedsInit(void)
{
  int i;

  //CMU_ClockEnable(cmuClock_HFPER, true);
  //CMU_ClockEnable(cmuClock_GPIO, true);
  for ( i=0; i<BSP_NO_OF_LEDS; i++ )
  {
    GPIO_PinModeSet(ledArray[i].port, ledArray[i].pin, gpioModePushPull, 0);
  }
  return BSP_STATUS_OK;
}

int BSP_LedToggle(int ledNo)
{
  if ((ledNo >= 0) && (ledNo < BSP_NO_OF_LEDS)) 
  {(ledArray[ledNo].port, ledArray[ledNo].pin);
    GPIO_PinOutToggle(ledArray[ledNo].port, ledArray[ledNo].pin);
    return BSP_STATUS_OK;
  }
  return BSP_STATUS_ILLEGAL_PARAM;
}
#endif // LED_BLINKING

void all_init(void)
{
  
	/* Chip errata */
	CHIP_Init();
	
	CMU_ClockDivSet(cmuClock_CORE,cmuClkDiv_32);	
	
	/* Setup SysTick Timer for 1 msec interrupts  */
	if (SysTick_Config(CMU_ClockFreqGet(cmuClock_CORE) / 1000)) while (1) ;
	
	CMU_ClockDivSet(cmuClock_CORE,cmuClkDiv_1);
	if (SysTick_Config(CMU_ClockFreqGet(cmuClock_CORE) / 1000)) while (1) ;
	
#warning "Set a proper frequency value for your environment"
	 NWAVE_Set_Frequency(866500000, 50000, 100); 
         /* NWAVE_Set_Frequency(868800000, 50000, 100); */
         /* NWAVE_Set_Frequency(916500000, 50000, 100); */
	
	CMU_ClockEnable(cmuClock_GPIO, true);

	delay(200);
	
	GPIO_PinModeSet(gpioPortF,2, gpioModePushPull, 0);
	GPIO_PinOutSet(gpioPortF,2); 
	
	GPIO_PinModeSet(gpioPortB,14, gpioModePushPull, 0);
	
	//RF reset 
	GPIO_PinModeSet(gpioPortB,14, gpioModePushPull, 0);
	GPIO_PinOutClear(gpioPortB,14);
	delay(1);
	GPIO_PinModeSet(gpioPortB,14, gpioModeInput,0);
	
	/////////////////////////////  
	GPIO_PinModeSet(gpioPortC,1, gpioModeInput, 0);
	GPIO_PinModeSet(gpioPortC,0, gpioModePushPull, 0);
	
	//UART
	
	CMU_ClockEnable(cmuClock_USART1, true);          // Enable USART1 peripheral clock

	// Initialize the clock Management Unit
	NWRM_CMU_Init(true);

	// Initialize the RTC clock
	NWRM_RTC_Init(0);        
        
        init_printf(NWRM_UART_Init(9600, true, false),
    		NWRM_UART_Putc,
    		NWRM_UART_Start,
    		NWRM_UART_Stop);        
        

  // Define the button pin as an input with an internal pull-up resistor

  GPIO_PinModeSet(gpioPortB, 13, gpioModeInputPull, 1);
  // Enable falling edge interrupts on button pin

  GPIO_IntConfig(gpioPortB, 13, false, true, true);

  NVIC_ClearPendingIRQ(GPIO_EVEN_IRQn);

  NVIC_EnableIRQ(GPIO_EVEN_IRQn);

  NVIC_ClearPendingIRQ(GPIO_ODD_IRQn);

  NVIC_EnableIRQ(GPIO_ODD_IRQn);
 
}      

void user_setup (void)
{
    all_init();  
    
#if EXAMPLE_CODE==UART_2_RM        
    tfp_printf("This is UART TO NWAVE example, each 4 bytes coming to UART are sent to the radio module transmitter.\n" );
#elif EXAMPLE_CODE==AT_PARSER    
    tfp_printf("Welcome to Nwave console!\nInput an AT command:\n" );
#endif    
}

unsigned char cnt = 0;
void user_loop (void)
{
    RTC_CounterReset();
#ifdef LED_BLINKING    
    if (led_blinking_enabled == true) {
      BSP_LedToggle(0);
    }
    else if(led_blinking_enabled == false) {
      GPIO_PinOutClear(ledArray[0].port, ledArray[0].pin);
    }
#endif    
#if EXAMPLE_CODE==UART_2_RM
    uart_2_rm();
#elif EXAMPLE_CODE==AT_PARSER
    at_cmd_parser();
#endif     
}

int main(void)
{
    user_setup();
    while (1) {
        NWRM_RTC_Sleep();
        user_loop();
    }
}


