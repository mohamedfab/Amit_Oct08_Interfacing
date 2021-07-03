/*
 * Dio_Interface.h
 *
 *  Created on: Jul 3, 2021
 *      Author: Eng_Fawzi
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include "Dio_Types.h"
#include "Bit_Math.h"
#include "Dio_Private.h"
void Dio_EnableClock(Dio_Port port);
void Dio_EnableDigital(Dio_Port port,Dio_Channel channel);
void Dio_ConfigChannel(Dio_Port port,Dio_Channel channel, Dio_Direction direction);
void Dio_WriteChannel(Dio_Port port,Dio_Channel channel, Dio_Level level);

#endif /* DIO_INTERFACE_H_ */
