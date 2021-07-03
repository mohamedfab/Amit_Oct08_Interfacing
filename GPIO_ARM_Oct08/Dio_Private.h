/*
 * Dio_Private.h
 *
 *  Created on: Jul 3, 2021
 *      Author: Eng_Fawzi
 */

#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_
#include "Std_Types.h"

#define GPIO_PORTA_APB_BASE         (0x40004000)
#define GPIO_PORTB_APB_BASE         (0x40005000)
#define GPIO_PORTC_APB_BASE         (0x40006000)
#define GPIO_PORTD_APB_BASE         (0x40007000)
#define GPIO_PORTE_APB_BASE         (0x40024000)
#define GPIO_PORTF_APB_BASE         (0x40025000)
#define RCG_RCGC2_BASE              (0x400FE000)


#define GPIO_GPIODATA_OFFSET            (0x038)
#define GPIO_GPIODIR_OFFSET             (0x400)
#define GPIO_GPIODEN_OFFSET             (0x51C)
#define GPIO_RCG_OFFSET                 (0x608)

/*          Direction Register          */
#define GPIO_GPIOADIR_REG               (*(u32 volatile *)(GPIO_PORTA_APB_BASE + GPIO_GPIODIR_OFFSET))
#define GPIO_GPIOBDIR_REG               (*(u32 volatile *)(GPIO_PORTB_APB_BASE + GPIO_GPIODIR_OFFSET))
#define GPIO_GPIOCDIR_REG               (*(u32 volatile *)(GPIO_PORTC_APB_BASE + GPIO_GPIODIR_OFFSET))
#define GPIO_GPIODDIR_REG               (*(u32 volatile *)(GPIO_PORTD_APB_BASE + GPIO_GPIODIR_OFFSET))
#define GPIO_GPIOEDIR_REG               (*(u32 volatile *)(GPIO_PORTE_APB_BASE + GPIO_GPIODIR_OFFSET))
#define GPIO_GPIOFDIR_REG               (*(u32 volatile *)(GPIO_PORTF_APB_BASE + GPIO_GPIODIR_OFFSET))

/*          Data Register          */
#define GPIO_GPIOADATA_REG              (*(u32 volatile *)(GPIO_PORTA_APB_BASE + GPIO_GPIODATA_OFFSET))
#define GPIO_GPIOBDATA_REG              (*(u32 volatile *)(GPIO_PORTB_APB_BASE + GPIO_GPIODATA_OFFSET))
#define GPIO_GPIOCDATA_REG              (*(u32 volatile *)(GPIO_PORTC_APB_BASE + GPIO_GPIODATA_OFFSET))
#define GPIO_GPIODDATA_REG              (*(u32 volatile *)(GPIO_PORTD_APB_BASE + GPIO_GPIODATA_OFFSET))
#define GPIO_GPIOEDATA_REG              (*(u32 volatile *)(GPIO_PORTE_APB_BASE + GPIO_GPIODATA_OFFSET))
#define GPIO_GPIOFDATA_REG              (*(u32 volatile *)(GPIO_PORTF_APB_BASE + GPIO_GPIODATA_OFFSET))

/*Digital Enable Register       */
#define GPIO_GPIOADEN_REG              (*(u32 volatile *)(GPIO_PORTA_APB_BASE + GPIO_GPIODEN_OFFSET))
#define GPIO_GPIOBDEN_REG              (*(u32 volatile *)(GPIO_PORTB_APB_BASE + GPIO_GPIODEN_OFFSET))
#define GPIO_GPIOCDEN_REG              (*(u32 volatile *)(GPIO_PORTC_APB_BASE + GPIO_GPIODEN_OFFSET))
#define GPIO_GPIODDEN_REG              (*(u32 volatile *)(GPIO_PORTD_APB_BASE + GPIO_GPIODEN_OFFSET))
#define GPIO_GPIOEDEN_REG              (*(u32 volatile *)(GPIO_PORTE_APB_BASE + GPIO_GPIODEN_OFFSET))
#define GPIO_GPIOFDEN_REG              (*(u32 volatile *)(GPIO_PORTF_APB_BASE + GPIO_GPIODEN_OFFSET))

/*     RCG Register */
#define GPIO_RCG2_REG                     (*(u32 volatile *)(RCG_RCGC2_BASE + GPIO_RCG_OFFSET))
#endif /* DIO_PRIVATE_H_ */
