/*
 * IntCtrl_Cfg.h
 *
 *  Created on: Oct 12, 2022
 *      Author: sheha
 */

#ifndef INTCTRL_CFG_H_
#define INTCTRL_CFG_H_

/***********************************************/
/************FILE DESCRIPTION*******************/
/***********************************************
 * 	\file  	 : IntCtrl.c
 * 	\breif 	 : Nested Vector Interrupt Controller Driver
 *
 * 	\details : the driver configure all MCU interrupts priority into groups and sub-groups
 * 			   Enable NVIC gate for Peripherals
 */

/***********************************************/
/************INCLUDES***************************/
/***********************************************/

/***********************************************/
/*******LOCAL MACROS CONSTANT\FUNCTIONS*********/
/***********************************************/

/***********************************************/
/************LOCAL DATA*************************/
/***********************************************/

/***********************************************/
/************GLOBAL DATA************************/
/***********************************************/

/***********************************************/
/*********LOCAL FUNCTION PROTOTYPES*************/
/***********************************************/

/***********************************************/
/*********LOCAL FUNCTION ***********************/
/***********************************************/

/***********************************************/
/*********GLOBAL FUNCTION **********************/
/***********************************************/

/************************************************
 * Syntax			: void IntCtrl_Init(void)
 * Description		: Initialize NVIC\SCB moudle by parsing the configuration into NVIC/SCB registers
 * Sync/Async		: Synchronous
 * Reentracy		: Non Reentracy
 * Parametrs (in)	: None
 * Parametrs (out)	: None
 * Return Value		: None
 ***********************************************/


#endif /* INTCTRL_CFG_H_ */
