#ifndef _ACTIVITY1_h_
#define _ACTIVITY1_h_

/**
 * @file activity1.h
 * @author Rahul S Iyer
 * @brief 
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * @brief MACROS for ports and pins
 */
#define LED_PORT (PORTD)
#define LED_PIN (PD0)

#define BUTTON_PORT (PORTB)
#define BUTTON_PIN (PB0)
#define BUTTON_STATUS (PINB)

#define HEATER_PORT (PORTC)
#define HEATER_PIN (PC0)
#define HEATER_STATUS (PINC)
/**
 * Include files
 */
#include<avr/io.h>
/**
 * @brief function to inistialise the pins
 * 
 */
void perpheral_io(void);

/**
 * @brief to switch on led
 * 
 */
void LED_ON(void);
/**
 * @brief to switch off led
 * 
 */
void LED_OFF(void);
#endif
