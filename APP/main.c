/*************************************
 * main.c
 * Created on: Apr 23, 2021
 * Author: Eng_Fawzi
 *************************************/
#include <util/delay.h>
#include "Bit_Math.h"
#include "Led_Interface.h"
int main ()
{
	Led_Init();
	while (1)
	{
		Led_ON(LED0);
		_delay_ms(500);
		Led_OFF(LED0);
		_delay_ms(500);
	}
	return 0;
}
