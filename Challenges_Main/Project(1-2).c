/*************************************
 * Project(1-2)
 * Author: Eng_Fawzi
 *************************************/
#include <util/delay.h>
#include <avr/io.h>
#include "SSD_Interface.h"
#include "Button_Interface.h"
#include "Buzzer_Interface.h"
#include "Relay_Interface.h"
s8 num=0;
boolean timerSet=FALSE;
void Set_TimerValue()
{
	while(1)
	{
		if (Button_Pressed(BUTTON2))
		{
			Buzzer_TurnON();
			_delay_ms(250);
			Buzzer_TurnOFF();
			num++;
			if (num == 100)
			{
				num=0;
			}
		}
		else if (Button_Pressed(BUTTON0))
		{
			Buzzer_TurnON();
			_delay_ms(250);
			Buzzer_TurnOFF();
			num--;
			if (num == -1)
			{
				num=99;
			}
		}
		else if (Button_Pressed(BUTTON1))
		{
			Buzzer_TurnON();
			_delay_ms(100);
			Buzzer_TurnOFF();
			_delay_ms(100);
			Buzzer_TurnON();
			_delay_ms(100);
			Buzzer_TurnOFF();
			timerSet = TRUE;
			return;
		}
		SSD_Display(num);
	}
}
int main ()
{
	s8 timer=0;
	SSD_Init();
	Button_Init();
	Buzzer_Init();
	Relay_Init();
	while(1)
	{
		if (Button_Pressed(BUTTON1) == TRUE)
		{
			Buzzer_TurnON();
			_delay_ms(100);
			Buzzer_TurnOFF();
			_delay_ms(100);
			Buzzer_TurnON();
			_delay_ms(100);
			Buzzer_TurnOFF();
			Set_TimerValue();
		}
		if (timerSet == TRUE)
		{
			Relay_TurnON();
			for (timer = num;timer>=0;timer--)
			{
				Buzzer_TurnON();
				delayWithDisaplayMS(timer, 250);
				Buzzer_TurnOFF();
				delayWithDisaplayMS(timer, 750);
			}
			Relay_TurnOFF();
			num=0;
			timerSet = FALSE;
		}
		SSD_Display(num);
	}
	return 0;
}