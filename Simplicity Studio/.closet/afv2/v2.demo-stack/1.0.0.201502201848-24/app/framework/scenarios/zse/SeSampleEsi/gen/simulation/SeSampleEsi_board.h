/** @file hal/
 *  @brief  Sample API functions for
 *
 * 
 * 
 * <!-- Author(s): Lee Taylor, lee@ember.com -->
 * <!-- Copyright 2005 by Ember Corporation. All rights reserved.       *80*-->   
 */

#define halInternalInitBoard()                                \
        do {                                                  \
          /*halInternalInitLed(); not currently simulated */  \
        } while(0)

#define halInternalPowerDownBoard()                           \
        do {                                                  \
          /*halInternalInitLed(); not currently simulated */  \
        } while(0) 

#define halInternalPowerUpBoard()   \
        do {                        \
        } while(0) 

enum HalBoardLedPins {
  BOARDLED0 = 0,
  BOARDLED1 = 1,
  BOARDLED2 = 2,
  BOARDLED3 = 3,
  BOARDLED4 = 4,
  BOARDLED5 = 5,
  BOARD_ACTIVITY_LED  = BOARDLED0,
  BOARD_HEARTBEAT_LED = BOARDLED1
};

#define BUTTON0         0
#define BUTTON1         1
#define TEMP_SENSOR_ADC_CHANNEL 0
#define TEMP_SENSOR_SCALE_FACTOR 3

// This stuff is for the si446x simulation. These variables need to be declared
// somewhere in your simulation framework.
extern boolean RF_NIRQ;
extern boolean RF_NSEL;
extern boolean RF_PWRDN;
