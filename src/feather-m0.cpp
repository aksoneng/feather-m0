#include "feather-m0.h"
#include "Arduino.h"

float battery_voltage(){
  return analogRead(PIN_VBAT)/1024.0*6.6;
}

//Returns free ram in octets
int free_ram(){
  char stack_dummy =0;
  return &stack_dummy - sbrk(0);
}
