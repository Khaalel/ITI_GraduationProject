/*
 * Servo_Program.c
 *
 *  Created on: Oct 31, 2023
 *      Author: Omar Abouzaid
 */

/*Lib Layers*/
#include "STD_Types.h"
#include "BIT_MATH.h"

/*MCAL Layers*/
#include "GPT_Interface.h"
#include "MGPIO_Interface.h"

/*HAL Layers*/
#include "SERVO_Interface.h"
#include "SERVO_config.h"
#include "SERVO_private.h"

void Servo_Init(void)
{
   /*Set pin for PWM */
	MGPIO_SetMode(SERVO_PWM_PORT,SERVO_PWM_PIN,ALTERNATE_FUNCTION_MODE);
	MGPIO_SetAlternativeFuncPin(SERVO_PWM_PORT,SERVO_PWM_PIN,AF1_TIM1_TIM2);



	/*Select Channel for Timer2 */
	TIMER_ChannelInit(SERVO_TIMER,
			SERVO_CHANNEL,
			TIMER_PWM_MODE_1,
			ACTIVE_HIGH,
			TIMER_CHANNEL_ENABLE);


	TIMER_SetCompareValue(SERVO_TIMER,SERVO_CHANNEL,1700);


	TIMER_Start_Continuous(SERVO_TIMER,SERVO_CHANNEL);

}

void SERVO_SET_DIRECTION (Servo_Direction Copy_u8_direction)
{

	switch (Copy_u8_direction)
	{
	case 0 :TIMER_SetCompareValue(SERVO_TIMER,SERVO_CHANNEL,700);break;
	case 1 :TIMER_SetCompareValue(SERVO_TIMER,SERVO_CHANNEL,1700);break;
	case 2 :TIMER_SetCompareValue(SERVO_TIMER,SERVO_CHANNEL,2600);break;
	}
}


