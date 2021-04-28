

#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"


void UART_init()
{
    //setting Baud rate
    UBRR0H =(value>>8)&0x0ff;
    UBRR0L = value;
    UCSR0C=(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);

    //Enabling reciever and transmitter
    UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}

char UART_READ()
{
    //wait for the data
    while(!(UCSR0A & (1<<RXC0)))
    {
        //do nothing loop
    }
    return UDR0;
}

void UART_WRITE(char data)
{
    while(!(UCSR0A & (1<<UDRE0)))
    {
        //do nothing
    }
    UDR0=data;

}
