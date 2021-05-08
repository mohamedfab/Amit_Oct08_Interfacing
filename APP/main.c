
#include <util/delay.h>
#include <avr/io.h>
#include "Lcd_Interface.h"
int main ()
{
	Lcd_Init();
	Lcd_Cmd(_LCD_CURSOR_UNDERLINE);
	Lcd_GoToRowColumn(0, 0);
	Lcd_DisplayStr("Hello LCD.....");
	while(1)
	{

	}
	return 0;
}
