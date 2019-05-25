/*
 * systick.c
 *
 *  Created on: 2019Äê5ÔÂ25ÈÕ
 *      Author: Administrator
 */
#include "all.h"

void delay_us(unsigned int n)
{
	unsigned int i;
	unsigned int tmp =(unsigned int)0x01<<16;
	SysTick_Config(72);
	for(i=0;i<n;i++)
	{
		while(!(SysTick->CTRL & tmp));
	}
	SysTick->CTRL &= (0xfffffffe);
}


void delay_ms(unsigned int n)
{
	unsigned int i;
	unsigned int tmp =(unsigned int)0x01<<16;
	SysTick_Config(72000);
	for(i=0;i<n;i++)
	{
		while(!(SysTick->CTRL & tmp));

	}
	SysTick->CTRL &= (0xfffffffe);
}
