/*
 * gpio.c
 *
 *  Created on: Mar 29, 2024
 *      Author: liran
 */
#include "gpio.h"
#define RCC 0x40023800
#define RCC_AHB 0x30
#define RCC_APB2 0x44
#define GPIOA 0x40020000
#define GPIO_INPUT 0x10

static uint32_t* pRcc_Ahb_En = (uint32_t*)(RCC + RCC_AHB);
static uint32_t* pGpioA_Cr = (uint32_t*)(GPIOA);
static uint32_t* pRcc_Apb2_En = (uint32_t*)(RCC +RCC_APB2);
void gpio_ini()
//Initialize the gpio a registers to set as analog input
{
	*pRcc_Ahb_En |= (1<<0);
	*pRcc_Apb2_En |=(1<<8);
	*pGpioA_Cr |= (3<<0);
}


