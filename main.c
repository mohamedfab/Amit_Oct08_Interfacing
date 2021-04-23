/*************************************
 * main.c
 *  Created on: Apr 23, 2021
 *  Author: Eng_Fawzi
 *************************************/

#include <avr/io.h>
#include <util/delay.h>

int main ()
{
	DDRC|=(1<<2);
	while (1)
	{
		PORTC |=(1<<2);
		_delay_ms(500);
		PORTC &=~(1<<2);
		_delay_ms(500);
	}
	return 0;
}
