#ifndef _ACTIVITY3_h_
#define _ACTIVITY3_h_
/**
 * @file activity3.h
 * @author Rahul S Iyer
 * @brief 
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define PWM_PORT (PB1)
/**
 * @brief Function to initialise the PWM output
 * 
 */
void set_PWM(void);
/**
 * @brief 
 * 
 * @param ADC 
 */
void out_PWM (uint16_t);
#endif
