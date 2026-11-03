/*
 * command_handler.c
 *
 *  Created on: 2, November, 2026.
 *      Author: Artyom Svetlichnyy
 */

#include "command_handler.h"
#define MAXIMUM_COMMAND_LENGTH 3

uint8_t ring_buffer_Rx[MAXIMUM_COMMAND_LENGTH * 3];

void begin_command_handling(UART_HandleTypeDef* huart){
	HAL_UARTEx_ReceiveToIdle_DMA(huart, ring_buffer_Rx,
			sizeof(ring_buffer_Rx) / sizeof(ring_buffer_Rx[0]));
}

void HAL_UARTEx_RxEventCallback(UART_HandleTypeDef *huart, uint16_t Size){
	HAL_UARTEx_ReceiveToIdle_DMA(huart, ring_buffer_Rx,
			sizeof(ring_buffer_Rx) / sizeof(ring_buffer_Rx[0]));
}

void command_handle(const uint8_t* command){
	// ToDo: Implement the command logic.
}



