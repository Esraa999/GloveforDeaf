#include <avr/io.h>
#include "../NeededDIO/config.h"
#include "ADC.h"

void ADC_init( int Reference, int prescaler) {
   
    ADMUX |= (Reference << REFS0);
    ADCSRA &= 0xF8;
    ADCSRA |= prescaler;
    ADCSRA |= (1 << ADEN);
}
void ADC_channel(int _channel){
   ADMUX = 0x00;
   ADMUX |= _channel;  
   _delay_ms(20);
   ADCSRA |= (1<<ADSC);//START CONVERSION
}



int ADC_read() {
    while(!(ADCSRA & (1<<ADIF)));
    int data = ADCL;
    data |= (ADCH<<8);
    return data;
}
