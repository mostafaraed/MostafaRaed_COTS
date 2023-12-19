#ifndef EXTI_REG_H
#define EXTI_REG_H

#define GICR			*((volatile uint8*)0x5B) /*General interrupt control register*/
#define GICR_INT1		7u						 /*Int1 bit*/
#define GICR_INT0		6u						 /*Int0 bit*/
#define GICR_INT2		5u						 /*Int2 bit*/

#define MCUCR			*((volatile uint8*)0x55) /*MCU Control register*/
#define MCUCR_ISC00		0u						 
#define MCUCR_ISC01		1u
#define MCUCR_ISC10		2u
#define MCUCR_ISC11		3u

#define MCUCSR			*((volatile uint8*)0x54)
#define MCUCSR_ISC2		6u

#endif