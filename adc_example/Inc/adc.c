/*
 * adc.c
 *
 *  Created on: Mar 28, 2024
 *      Author: liran
 */

//choose channel
//choose continuous conversion mode
//adc 1 channel
//select sampling time as i want
//conversion time = (sampling_time + 12.5 cycles)/adc_clk

#include "adc.h"
#define ADC1 0x40012000
#define ADC_CR2 0x08//for select continuous and off/on and flag eoc when
#define ADC_SMPL2 0x10
#define ADC_DR 0x4C
//the conversion ends, swstart start conversion flag and overun status

static uint32_t* pAdc_Cr2 = (uint32_t*)(ADC1 + ADC_CR2);
static uint32_t* pAdc_smpl_Ch0 = (uint32_t*)(ADC1 + ADC_SMPL2);
static uint32_t* pAdc_Sr = (uint32_t*)(ADC1);
static uint32_t* pAdc_Dr = (uint32_t*)(ADC1 + ADC_DR);

void adc_ini()
//initialize the adc converter
{
	*pAdc_smpl_Ch0 =(1<<0);//Sampling 15 cycles
	*pAdc_Cr2 |=(1<<0);

	for(int i = 0;i <15;i++){};
}
void adc_start()
//start the conversion
{

	*pAdc_Cr2 |=(1<<30);
}
uint16_t adc_get()
//returns the conversion
{
	uint16_t value = *pAdc_Dr;
	return value;
}
void adc_stop()
//stops the conversion
{
	*pAdc_Cr2 &=~(1<<30);
}
bool adc_check()
//check if the conversion ends and return true if ends
{

	bool check = (*pAdc_Sr)&(1<<1);
	return check;
}
