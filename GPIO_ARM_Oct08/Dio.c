/*
 * Dio.c
 *
 *  Created on: Jul 3, 2021
 *      Author: Eng_Fawzi
 */
#include "Dio_Interface.h"
void Dio_EnableClock(Dio_Port port)
{
    switch (port)
    {
    case DIO_PORTA:
        SET_BIT(GPIO_RCG2_REG,0);
        break;
    case DIO_PORTB:
        SET_BIT(GPIO_RCG2_REG,1);
        break;
    case DIO_PORTC:
        SET_BIT(GPIO_RCG2_REG,2);
        break;
    case DIO_PORTD:
        SET_BIT(GPIO_RCG2_REG,3);
        break;
    case DIO_PORTE:
        SET_BIT(GPIO_RCG2_REG,4);
        break;
    case DIO_PORTF:
        SET_BIT(GPIO_RCG2_REG,5);
        break;

    }
}
void Dio_EnableDigital(Dio_Port port,Dio_Channel channel)
{
    switch (port)
    {
    case DIO_PORTA:
        SET_BIT(GPIO_GPIOADEN_REG,channel);
        break;
    case DIO_PORTB:
        SET_BIT(GPIO_GPIOBDEN_REG,channel);
        break;
    case DIO_PORTC:
        SET_BIT(GPIO_GPIOCDEN_REG,channel);
        break;
    case DIO_PORTD:
        SET_BIT(GPIO_GPIODDEN_REG,channel);
        break;
    case DIO_PORTE:
        SET_BIT(GPIO_GPIOEDEN_REG,channel);
        break;
    case DIO_PORTF:
        SET_BIT(GPIO_GPIOFDEN_REG,channel);
        break;
    }
}
void Dio_ConfigChannel(Dio_Port port,Dio_Channel channel, Dio_Direction direction)
{
    switch (port)
       {
       case DIO_PORTA:
           if (direction == INPUT)
           {
               CLEAR_BIT(GPIO_GPIOADIR_REG,channel);
           }
           else
           {
               SET_BIT(GPIO_GPIOADIR_REG,channel);
           }
           break;
       case DIO_PORTB:
           if (direction == INPUT)
           {
               CLEAR_BIT(GPIO_GPIOBDIR_REG,channel);
           }
           else
           {
               SET_BIT(GPIO_GPIOBDIR_REG,channel);
           }
           break;
       case DIO_PORTC:
           if (direction == INPUT)
           {
               CLEAR_BIT(GPIO_GPIOCDIR_REG,channel);
           }
           else
           {
               SET_BIT(GPIO_GPIOCDIR_REG,channel);
           }
           break;
       case DIO_PORTD:
           if (direction == INPUT)
           {
               CLEAR_BIT(GPIO_GPIODDIR_REG,channel);
           }
           else
           {
               SET_BIT(GPIO_GPIODDIR_REG,channel);
           }
           break;
       case DIO_PORTE:
           if (direction == INPUT)
           {
               CLEAR_BIT(GPIO_GPIOEDIR_REG,channel);
           }
           else
           {
               SET_BIT(GPIO_GPIOEDIR_REG,channel);
           }
           break;
       case DIO_PORTF:
           if (direction == INPUT)
           {
               CLEAR_BIT(GPIO_GPIOFDIR_REG,channel);
           }
           else
           {
               SET_BIT(GPIO_GPIOFDIR_REG,channel);
           }
           break;
       }
}
void Dio_WriteChannel(Dio_Port port,Dio_Channel channel, Dio_Level level)
{
    switch (port)
      {
      case DIO_PORTA:
          if (level == STD_LOW)
          {
              CLEAR_BIT(GPIO_GPIOADATA_REG,channel);
          }
          else
          {
              SET_BIT(GPIO_GPIOADATA_REG,channel);
          }
          break;
      case DIO_PORTB:
          if (level == STD_LOW)
          {
              CLEAR_BIT(GPIO_GPIOBDATA_REG,channel);
          }
          else
          {
              SET_BIT(GPIO_GPIOBDATA_REG,channel);
          }
          break;
      case DIO_PORTC:
          if (level == STD_LOW)
          {
              CLEAR_BIT(GPIO_GPIOCDATA_REG,channel);
          }
          else
          {
              SET_BIT(GPIO_GPIOCDATA_REG,channel);
          }
          break;
      case DIO_PORTD:
          if (level == STD_LOW)
          {
              CLEAR_BIT(GPIO_GPIODDATA_REG,channel);
          }
          else
          {
              SET_BIT(GPIO_GPIODDATA_REG,channel);
          }
          break;
      case DIO_PORTE:
          if (level == STD_LOW)
          {
              CLEAR_BIT(GPIO_GPIOEDATA_REG,channel);
          }
          else
          {
              SET_BIT(GPIO_GPIOEDATA_REG,channel);
          }
          break;
      case DIO_PORTF:
          if (level == STD_LOW)
          {
              CLEAR_BIT(GPIO_GPIOFDATA_REG,channel);
          }
          else
          {
              SET_BIT(GPIO_GPIOFDATA_REG,channel);
          }
          break;
      }
}
