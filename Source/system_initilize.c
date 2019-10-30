/*
 * system_initilize.c
 *
 *  Created on: Oct 30, 2019
 *      Author: satish
 */

#include "generic_include.h"

void wtchdog_init(void)
{
    WATCHDOG1_LOAD_R = 0xFFFFFF;
    /*Enabled interrupts and system reset in case of watchdog counter goes out of scope */
    WATCHDOG1_CTL_R = system_reset_watchdog;
    //service_watchdog();
}

void DMA_init()
{

}

void enable_systemclock()
{
    /*Enable system clock configure RCC and RCC2 registers*/


    /*Enable Clock Gating control*/
    SYSCTL_RCGC2_R =(SYSCTL_RCGC2_UDMA |SYSCTL_RCGC2_GPIOF | SYSCTL_RCGC2_GPIOE | SYSCTL_RCGC2_GPIOD
                     |SYSCTL_RCGC2_GPIOC | SYSCTL_RCGC2_GPIOB | SYSCTL_RCGC2_GPIOA);
     /*Enable clock gating for differnet peripherals RCGC1 */
{    /*Enable clock gating for differenct peripherals RCGC0 */

}

void sys_init()
{
    wtchdog_init();
}

