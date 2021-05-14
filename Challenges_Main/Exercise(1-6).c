/**************************
 * Exercise(1-6).c
 * Author: Eng_Fawzi
 **************************/
#include <avr/io.h>
#include <util/delay.h>

#define LED0_PIN		(2)
#define LED1_PIN		(7)

#define BUTTON0_PIN		(0)
#define BUTTON1_PIN		(4)

int main ()
{
	/*	Configure LED0 and LED1 Pin as Output	*/
	DDRC=(1<<LED0_PIN)|(1<<LED1_PIN);
	/*	Configure BUTTON0 Pin as Input	*/
	DDRB&=~(1<<BUTTON0_PIN);
	/*	Configure BUTTON1 Pin as Input	*/
	DDRB&=~(1<<BUTTON1_PIN);

	while(1)
	{
		/*	Check if BUTTON0 Pressed	*/
		if(PINB&(1<<BUTTON0_PIN))
		{
			_delay_ms(250);
			/*	Toggle LED0	*/
			PORTC^=(1<<LED0_PIN);
		}
		/*	Check if BUTTON1 Pressed	*/
		if(PINB&(1<<BUTTON1_PIN))
		{
			_delay_ms(250);
			/*	Toggle LED1	*/
			PORTC^=(1<<LED1_PIN);
		}
	}
	return 0;
}
