#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED


#include <avr/io.h>

#define LED_ON (PORTB |= (1<<PB0))    //LED ON
#define LED_OFF (PORTB &=~(1<<PB0))   //LED OFF
#define SENSOR_ON !(PIND&(1<<PD1))     // BUTTON_SWITCH ON
#define HEATER_ON !(PIND&(1<<PD0))     // Switch ON

void Activity1_init();


#endif // ACTIVITY1_H_INCLUDED

