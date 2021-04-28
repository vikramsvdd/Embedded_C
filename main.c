#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

int main()
{
    uint16_t temp=0;
    unsigned int duty;

    perpheral_io(); // initialising all peripherals and pin configurations
    Init_adc(); // initialising ADC registers
    set_PWM(); // setting pwm output
    UART_init(); //initialising UART registers
    while(1)
    {
         if((!(BUTTON_STATUS & (1<<BUTTON_PIN))) && (!(HEATER_STATUS & (1<<HEATER_PIN))))// if both swithes are ON, LED will glow
        {
            LED_ON(); // turn ON led
            temp=Get_ADC(0); // read temp value from channel 0
            UART_READ(temp);
            UART_WRITE(temp); // write the temperature data to the UART buffer
             for(duty=0;duty<1024;duty++)// giving pwm output 
          {
              OCCR1A=duty;
          }

        }
        
        else 
        {
           LED_OFF(); // turn off led if switch is not ON
        }
    }
    return 0;
}
