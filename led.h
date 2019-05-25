/*
 * led.h
 *
 *  Created on: 2019Äê5ÔÂ24ÈÕ
 *      Author: Administrator
 */

#ifndef LED_H_
#define LED_H_

#include "all.h"

#define LED_PORT GPIOB


typedef enum{
	green = 0,
	blue = 1,
	red = 5
}color;



void ledTurnOn(color co);
void ledTurnOff(color co);
void ledToggle(color co);






#endif /* LED_H_ */
