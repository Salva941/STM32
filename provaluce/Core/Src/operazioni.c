/*
 * operazioni.c
 *
 *  Created on: Apr 30, 2023
 *      Author: pato-
 */
#include "operazioni.h"
#include "adc.h"
#include <stdio.h>
#include "uart.h"

float voltage=0;
float lux=0;
float R=3000;
float S=0.00000075;



//void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc)
//{
//	if (hadc == &hadc1)
//	{
//
//
//	int i=0;
//	value=0;
//	for(i=0; i<ADC_BUFFER_LENGTH; i++)
//	{
//		value +=ADCBuffer[i];
//	}
//	value=value/ADC_BUFFER_LENGTH;
//}
//}




void elabora(void)
{
	voltage=((float)value)/4095*3.3;
	lux=voltage/(R*S);




}
void print(void)
{
	sprintf(UART_Buffer,"\n \r volt = %5.2fV, lux = %5.2fLux", voltage, lux);
	UART_Tx_String(UART_Buffer);
	HAL_Delay(100);
}

void UART_Tx_String(char *string)
{
	uint8_t index = 0;

	while( (index < UART_BUFFER_SIZE )&&( string[index] != 0) )
	{
		index += 1;
	}
	HAL_UART_Transmit(&huart2,(uint8_t*)string,index,5000);
}
