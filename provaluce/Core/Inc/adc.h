/*
 * adc.h
 *
 *  Created on: Apr 30, 2023
 *      Author: pato-
 */

#ifndef INC_ADC_H_
#define INC_ADC_H_
#include <stdint.h>
#include "stm32f4xx_hal.h"


#define ADC_BUFFER_LENGTH 100
extern uint16_t ADCBuffer[ADC_BUFFER_LENGTH];
extern uint32_t value;

extern void adc_init(void);

ADC_HandleTypeDef hadc1;
DMA_HandleTypeDef hdma_adc1;

#endif /* INC_ADC_H_ */
