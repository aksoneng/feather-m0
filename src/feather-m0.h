#ifndef _FEATHER_H_
#define _FEATHER_H_

#define PIN_VBAT      A7
#define PIN_RFM95_NSS 8
#define PIN_RFM95_IO0 3
#define PIN_RFM95_IO1 6

extern "C" char *sbrk(int i);

float battery_voltage();
int   free_ram();

#endif
