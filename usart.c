/*
 * usart.c
 *
 *  Created on: 2019��5��24��
 *      Author: Administrator
 */


#include "usart.h"

extern UART_HandleTypeDef huart1;

void print(char * str)
{

	char * p;
	uint16_t size = 0;
	for(p=str;*p!='\0';p++)
	{
		size++;
	}
	HAL_UART_Transmit(&huart1, (unsigned char*)str,  size, 50);
}
