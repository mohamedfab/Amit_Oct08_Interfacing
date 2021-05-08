/************************************
 * Lcd.c
 *  Created on: May 8, 2021
 *  Author: Eng_Fawzi
 ************************************/

#include "Lcd_Interface.h"

static void Lcd_EnablePulse(void)
{
	Dio_WriteChannel(LCD_EN_PORT, LCD_EN_CHANNEL, STD_HIGH);
	_delay_ms(1);
	Dio_WriteChannel(LCD_EN_PORT, LCD_EN_CHANNEL, STD_LOW);
	_delay_ms(2);
}
void Lcd_Init(void)
{
	Dio_ConfigChannel(LCD_RS_PORT, LCD_RS_CHANNEL, OUTPUT);
	Dio_ConfigChannel(LCD_RW_PORT, LCD_RW_CHANNEL, OUTPUT);
	Dio_ConfigChannel(LCD_EN_PORT, LCD_EN_CHANNEL, OUTPUT);

	Dio_ConfigChannels(LCD_DATA_PORT, LCD_MASK, OUTPUT);
	Dio_WriteChannel(LCD_RW_PORT, LCD_RW_CHANNEL, STD_LOW);

	_delay_ms(15);
	Lcd_Cmd(0x03);
	_delay_ms(5);
	Lcd_Cmd(0x03);
	_delay_us(100);
	Lcd_Cmd(0x03);
	Lcd_Cmd(0x02);
	Lcd_Cmd(0x02);
	Lcd_Cmd(_LCD_4BIT_MODE);
}
void Lcd_Cmd(LcdCmdType cmd)
{
	u8 loc_LowNibble = cmd<<4;
	u8 loc_HighNibble = cmd;
	Dio_WriteChannel(LCD_RS_PORT, LCD_RS_CHANNEL, STD_LOW); /* Send CMD */

	Dio_WriteChannels(LCD_DATA_PORT, loc_HighNibble, LCD_MASK);
	Lcd_EnablePulse();
	Dio_WriteChannels(LCD_DATA_PORT, loc_LowNibble, LCD_MASK);
	Lcd_EnablePulse();
}
void Lcd_Data(u8 data)
{
	u8 loc_LowNibble = data<<4;
	u8 loc_HighNibble = data;
	Dio_WriteChannel(LCD_RS_PORT, LCD_RS_CHANNEL, STD_HIGH); /* Send data */

	Dio_WriteChannels(LCD_DATA_PORT, loc_HighNibble, LCD_MASK);
	Lcd_EnablePulse();
	Dio_WriteChannels(LCD_DATA_PORT, loc_LowNibble, LCD_MASK);
	Lcd_EnablePulse();
}
void Lcd_GoToRowColumn(u8 row,u8 column)
{
	switch (row)
	{
	case 0:
		Lcd_Cmd(0x80+column);
		break;

	case 1:
		Lcd_Cmd(0xC0+column);
		break;
	}
}
void Lcd_DisplayChr(u8 chr)
{
	Lcd_Data(chr);
}
void Lcd_DisplayStr(u8* str)
{
	while (*str != '\0')
	{
		Lcd_DisplayChr(*str);
		str++;
	}
}
