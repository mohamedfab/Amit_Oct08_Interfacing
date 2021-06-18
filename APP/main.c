
#include <avr/io.h>		/* Include AVR std. library file */
#include <stdio.h>		/* Include std. library file */
#include <util/delay.h>		/* Include Delay header file */
#include <Uart_Interface.h>
#include "Led_Interface.h"
int main(void)
{
	u8 uartRead;
	Led_Init();
	UART_Init(UART_BAUDRATE_9600);
	UART_TransmitStr("Hello UART.............");
	while(1)
	{
		uartRead = UART_ReceiveChr();

		if (uartRead == 'm')
		{
			Led_Toggle(LED0);
		}
		else if (uartRead == 'l')
		{
			Led_Toggle(LED1);
		}
	}
}
