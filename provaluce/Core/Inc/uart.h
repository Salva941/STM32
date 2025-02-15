/*
 * uart.h
 *
 *  Created on: 1 mag 2023
 *      Author: pato-
 */

#ifndef INC_UART_H_
#define INC_UART_H_
#include "stm32f4xx_hal.h"


#define UART_BUFFER_SIZE 120
extern char UART_Buffer[UART_BUFFER_SIZE + 1];
extern void uart_init(void);
UART_HandleTypeDef huart2;


#endif /* INC_UART_H_ */
