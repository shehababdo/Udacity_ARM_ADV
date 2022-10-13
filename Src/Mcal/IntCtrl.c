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
#include "Std_Types.h"
#include "IntCtrl.h"
#include "Mcu_Hw.h"
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
void InitCtrl_Init(void)
{
	//TODO: configuration grouping\sub system in APINT rgister in SCB
	APINT =0xFA05|0x00000;
	
	//TODO:Assign group/sub-group priority in NVIC_PRx in NVIC and 	SCB_SYSPRIx Registers	
	
	
	//TODO:Enable\Disable based on user configurations in NVIC_ENx and SCB_Sys registers 

	
}
