#include "Activity2.h"

void ADConverter_init() {
    ADMUX|=(1<<REFS0);
    ADCSRA|=(1<<ADEN)|(7<<ADPS0);

}
uint16_t Read_ADC(uint8_t ch){
    ADMUX&=0xF8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    ADCSRA |=(1<<ADSC);
    while(!(ADCSRA&(1<<ADIF)));
    ADCSRA|(1<<ADIF);
    return(ADC);

}

