#include "SSD_Interface.h"
#include "Eeprom_Interface.h"
int main(void)
{
	u8 num = 0;
	SSD_Init();
	if (EEPROM_Read(0) != 0xFF)
	{
		num = EEPROM_Read(0);
	}
	while(1)
	{
		SSD_Display(num);
		SSD_DelayWithDisaplayMS(num, 500);
		num ++;
		if (num == 100)
		{
			num = 0;
		}
		EEPROM_Write(0, num);
	}
}
