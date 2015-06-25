#ifndef UNB_H_
#define UNB_H_

//#include "stdint.h"
enum 
{
	PROTOCOL_B = 0,
	PROTOCOL_E = 1
};

unsigned char NWAVE_send(unsigned char *packet, unsigned char length, unsigned char* packetRec, unsigned char protocol);
int NWAVE_Set_Frequency(unsigned long carrying_frequency, unsigned long bandwidth, int channels);


#endif /* UNB_H_ */