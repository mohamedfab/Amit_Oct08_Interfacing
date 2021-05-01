/*************************************
 * main.c
 * Created on: Apr 23, 2021
 * Author: Eng_Fawzi
 *************************************/
#include <util/delay.h>
#include "Bit_Math.h"
#include "Led_Interface.h"
#include "Button_Interface.h"
int main ()
{
	Led_Init();
	Button_Init();
	while (1)
	{
		if (Button_Pressed(BUTTON0) == TRUE)
		{
			_delay_ms(250);
			Led_Toggle(LED0);
		}
		if (Button_Pressed(BUTTON1) == TRUE)
		{
			_delay_ms(250);
			Led_Toggle(LED1);
		}
		if (Button_Pressed(BUTTON2) == TRUE)
		{
			_delay_ms(250);
			Led_Toggle(LED2);
		}
	}
	return 0;
}
