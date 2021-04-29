#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

void set_PWM(void)
{
    DDRB |= (1<<PWM_PORT);// setting B1 port as pwm output for timer1
    
     // setting compare output match A mode for timer 1  in non-inverting mode and setting the prescalars(64) 
     TCCR1A |= (1<<COM1A1) | (1<<WGM11) | (1<<WGM10); 
     TCCR1B |= (1<<WGM12)| (1<<CS11) | (1<<CS10);
}

void out_PWM(uint16_t val)
{
    if((val>=0) && (val<=209))
    {

        OCR1A = 205; //20% duty cycle
        
    }
    else if((val>=210) && (val<=509))
    {

        OCR1A = 410; //40% duty cycle
        
    }
    else if((val>=510) && (val<=709))
    {

        OCR1A = 717;//70% duty cycle
        
    }
    else if((val>=710) && (val<=1024))
    {

        OCR1A = 973; //95% duty cycle
  
    }
    else
    {
        OCR1A = 0; //0% output
    }
}


