/*
 * Button_Cfg.h
 *
 *  Created on: Apr 30, 2021
 *      Author: Eng_Fawzi
 */

#ifndef HAL_BUTTON_INC_BUTTON_CFG_H_
#define HAL_BUTTON_INC_BUTTON_CFG_H_

/*	LEDs HW Channels Mapping	*/
#define BUTTON0_PORT		DIO_PORTB
#define BUTTON0_CHANNEL		DIO_CHANNEL0

#define BUTTON1_PORT		DIO_PORTB
#define BUTTON1_CHANNEL		DIO_CHANNEL4

#define BUTTON2_PORT		DIO_PORTD
#define BUTTON2_CHANNEL		DIO_CHANNEL2

/*	LEDs HW Connection	*/
#define PULL_DOWN      	(0)
#define PULL_UP			(1)

#define BUTTON0_CONNECTION	PULL_DOWN
#define BUTTON1_CONNECTION	PULL_DOWN
#define BUTTON2_CONNECTION	PULL_DOWN

#endif /* HAL_BUTTON_INC_BUTTON_CFG_H_ */
