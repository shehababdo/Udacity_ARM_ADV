/*
 * IntCtrl.h
 *
 *  Created on: Oct 12, 2022
 *      Author: sheha
 */

#ifndef INTCTRL_H_
#define INTCTRL_H_
/***********************************************/
/************FILE DESCRIPTION*******************/
/***********************************************
 * 	\file  	 : IntCtrl.h
 * 	\breif 	 : Nested Vector Interrupt Controller Driver
 *
 * 	\details : the driver configure all MCU interrupts priority into groups and sub-groups
 * 			   Enable NVIC gate for Peripherals
 */

/***********************************************/
/************INCLUDES***************************/
/***********************************************/
#include "Std_Types.h"
#include "IntCtrl_Cfg.h"
#include "IntCtrl_Types.h"
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
 * Description		: Initialize NVIC\SCB module by parsing the configuration into NVIC/SCB registers
 * Sync/Async		: Synchronous
 * Reentracy		: Non Reentracy
 * Parametrs (in)	: None
 * Parametrs (out)	: None
 * Return Value		: None
 ***********************************************/
void InitCtrl_Init(void);


#endif /* INTCTRL_H_ */
