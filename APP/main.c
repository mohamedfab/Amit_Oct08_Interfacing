/*************************************
 * Project(1-2)
 * Author: Eng_Fawzi
 *************************************/
#include <util/delay.h>
#include <Wdg_Interface.h>
#include "avr/interrupt.h"
#include "GlblInterrupt_Interface.h"
#include "Led_Interface.h"
#include "Lcd_Interface.h"
#include "Wdg_Interface.h"
#include "avr/io.h"
int main ()
{
	Led_Init();
	WDG_ON();
	Led_ON(LED0);
	_delay_ms(1500);
	Led_OFF(LED0);
	while(1)
	{
		asm("WDR");
	}
	return 0;
}
