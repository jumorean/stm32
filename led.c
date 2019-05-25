#include "led.h"


void ledTurnOn(color co)
{
	HAL_GPIO_WritePin(LED_PORT, (uint16_t)(1<<co), GPIO_PIN_RESET);
}
void ledTurnOff(color co)
{

	HAL_GPIO_WritePin(LED_PORT, (uint16_t)(1<<co), GPIO_PIN_SET);
}
void ledToggle(color co)
{
	HAL_GPIO_TogglePin(LED_PORT,(uint16_t)(1<<co));
}








