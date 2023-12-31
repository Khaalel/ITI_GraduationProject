/*
 * LINE_FOLLOWER_CONFIG.h
 *
 *  Created on: Nov 7, 2023
 *      Author: Misra
 */

#ifndef LINE_FOLLOWER_CONFIG_H_
#define LINE_FOLLOWER_CONFIG_H_

#define RIGHT_LED_PORT			PORTA
#define RIGHT_LED_PIN			PIN11
#define RIGHT_LED_INTERRUPT		EXTI_LINE_11

//#define MIDDLE_LED_PORT			PORTA
//#define MIDDLE_LED_PIN			PIN11
//#define MIDDLE_LED_INTERRUPT	EXTI_LINE_11

#define LEFT_LED_PORT			PORTA
#define LEFT_LED_PIN			PIN12
#define LEFT_LED_INTERRUPT		EXTI_LINE_12


#define RIGHT_INTERRUPT_TRIGGER			EXTI_RISING_EDGE
#define MIDDLE_INTERRUPT_TRIGGER		EXTI_RISING_EDGE
#define LEFT_INTERRUPT_TRIGGER			EXTI_RISING_EDGE
#endif /* LINE_FOLLOWER_CONFIG_H_ */
