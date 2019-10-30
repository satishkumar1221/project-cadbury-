/*
 * generic_include.h
 *
 *  Created on: Oct 30, 2019
 *      Author: satish
 */

#ifndef INCLUDE_GENERIC_INCLUDE_H_
#define INCLUDE_GENERIC_INCLUDE_H_

#include "tm4c123gh6pm.h"
#include<stdio.h>
/*#include<spi.h>
#include<i2c.h>
#include<gpio.h>
#include<uart.h>
#include<sysclk.h>*/

#define system_reset_watchdog 0x03

extern void sys_init();
extern void wtchdog_init(void);

//void watchdog_init(void);



#endif /* INCLUDE_GENERIC_INCLUDE_H_ */
