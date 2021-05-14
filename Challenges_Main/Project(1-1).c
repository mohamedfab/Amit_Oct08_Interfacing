/*************************************
 * Project(1-1)
 * Author: Eng_Fawzi
 *************************************/
#include <avr/io.h>
#include <util/delay.h>
#include "Std_Types.h"

#define LED0_PIN		(2)
#define BUZZER_PIN		(3)

#define BUTTON0_PIN		(0)
#define BUTTON1_PIN		(4)
#define BUTTON2_PIN		(2)

#define TOTAL_PRESSES_NO	(6)
int main ()
{
	u8 button0_PressesNo=0;
	u8 button1_PressesNo=0;
	u8 button2_PressesNo=0;
	u8 total_pressesNo=0;
	/*	Configure LED0 Pin as Output	*/
	DDRC|=(1<<LED0_PIN);
	/*	Configure BUZZER Pin as Output	*/
	DDRC|=(1<<LED0_PIN);
	/*	Configure BUTTON0 Pin as Input	*/
	DDRB&=~(1<<BUTTON0_PIN);
	/*	Configure BUTTON1 Pin as Input	*/
	DDRB&=~(1<<BUTTON1_PIN);
	/*	Configure BUTTON2 Pin as Input	*/
	DDRD&=~(1<<BUTTON2_PIN);

	while(1)
	{
		/*	Check if BUTTON0 Pressed	*/
		if(PINB&(1<<BUTTON0_PIN))
		{
			_delay_ms(250);
			button0_PressesNo++;
			total_pressesNo++;
		}
		/*	Check if BUTTON1 Pressed	*/
		if(PINB&(1<<BUTTON1_PIN))
		{
			_delay_ms(250);
			button1_PressesNo++;
			total_pressesNo++;
		}
		/*	Check if BUTTON2 Pressed	*/
		if(PIND&(1<<BUTTON2_PIN))
		{
			_delay_ms(250);
			button2_PressesNo++;
			total_pressesNo++;
		}
		/*	Check if Password completely entered 	*/
		if (total_pressesNo == TOTAL_PRESSES_NO)
		{
			/*	Check if entered password is right	*/
			if (button0_PressesNo == 2 && button1_PressesNo == 1 && button2_PressesNo == 3)
			{
				button0_PressesNo=0;
				button1_PressesNo=0;
				button2_PressesNo=0;
				total_pressesNo=0;

				PORTC|=(1<<LED0_PIN);
				_delay_ms(500);
				PORTC&=~(1<<LED0_PIN);
			}
			/*	Check if entered password is wrong	*/
			else
			{
				button0_PressesNo=0;
				button1_PressesNo=0;
				button2_PressesNo=0;
				total_pressesNo=0;

				PORTA|=(1<<BUZZER_PIN);
				_delay_ms(500);
				PORTA&=~(1<<BUZZER_PIN);
			}
		}
	}
	return 0;
}