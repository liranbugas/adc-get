/*
 * adc.h
 *
 *  Created on: Mar 28, 2024
 *      Author: liran
 */

#ifndef ADC_H_
#define ADC_H_

#include <stdint.h>
#include<stdbool.h>
void adc_ini();
void adc_start();
uint16_t adc_get();
void adc_stop();
bool adc_check();
#endif /* ADC_H_ */
