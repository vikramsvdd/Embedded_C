
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

void LED_ON()
{
	LED_PORT |= (1<<LED_PIN);
}
void LED_OFF()
{
	LED_PORT &= ~(1<<LED_PIN);
}
void perpheral_io(void)
{
  DDRD |= (1<<LED_PIN);  // setting D port as output for led
  DDRC &= ~(1<<HEATER_PIN); // setting C port as input for heater button
  DDRB &= ~(1<<BUTTON_PIN); // setting B port as input to check the presence of a passenger
  HEATER_PORT |= (1<<HEATER_PIN);
  BUTTON_PORT |= (1<<BUTTON_PIN);
}
