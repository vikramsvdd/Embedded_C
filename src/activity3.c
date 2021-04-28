#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

void set_PWM(void)
{
    DDRB |= (1<<PB1);// setting B1 port as pwm output for timer1
    
     // setting compare output match A mode for timer 1  in non-inverting mode and setting the prescalars(64) 
     TCCR1A |= (1<<COM1A1) | (1<<WGM11) | (1<<WGM10); 
     TCCR1B |= (1<<WGM12)| (1<<CS11) | (1<<CS10);
}
