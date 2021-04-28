#ifndef _ACTIVITY2_h_
#define _ACTIVITY2_h_
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
 * @brief Function to initailaise the ADC register 
 * 
 */
void Init_adc();
/**
 * @brief Function to select the required chanel and read the analog data
 * 
 * @param channel 
 * @return uint16_t 
 */
uint16_t Get_ADC(uint8_t channel )
#endif
