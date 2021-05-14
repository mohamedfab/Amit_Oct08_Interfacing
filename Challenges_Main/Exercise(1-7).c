/**************************
 * Exercise(1-7).c
 * Author: Eng_Fawzi
 **************************/
#include <util/delay.h>
#include <avr/io.h>
#include "SSD_Interface.h"
#include "Button_Interface.h"

int main ()
{
	s8 num=0;
	SSD_Init();
	Button_Init();
	while(1)
	{
		/*	Check Button0 if pressed	*/
		if (Button_Pressed(BUTTON0) == TRUE)
		{
			/*	delay for button bounce	*/
			_delay_ms(250);
			num++;
			if (num == 100)
			{
				num =0 ;
			}
		}
		/*	Check Button2 if pressed	*/
		else if (Button_Pressed(BUTTON2) == TRUE)
		{
			/*	delay for button bounce	*/
			_delay_ms(250);
			num--;
			if (num == -1)
			{
				num = 99 ;
			}
		}
		else
		{
			/*	Do Nothing	*/
		}
		SSD_Display(num);
	}
	return 0;
}
