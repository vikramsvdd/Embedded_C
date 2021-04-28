#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

void Init_adc()
{
    ADMUX |=(1<<REFS0); // Selecting Channel 0 using ADMUX register and internerally connecting Aref and AVCC
    ADCSRA |= (1<<ADEN) | (7<<ADPS0); // Enabling ADC and setting the sampling frequency

}


uint16_t Get_ADC(uint8_t channel )
{
    ADMUX &= 0xF8; // setting 1 to all ADMUX register except 0,1,2.
    channel= channel & 0b00000111; // logical AND with 0b00000111 will give the channel itsef.
    ADMUX |= channel; // selecting the channel by OR with ADMUX
    // Start single conversion
    ADCSRA |= (1<<ADSC);
    //Conversion
    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA |=(1<<ADIF);
    return(ADC);
}
