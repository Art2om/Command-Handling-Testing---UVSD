/*
 * command_handler.h
 *
 *  Created on: 2, November, 2026
 *  Author: Artyom Svetlichnyy
 */

#ifndef INC_COMMAND_HANDLER_H_
#define INC_COMMAND_HANDLER_H_

#include <stdint.h>
#include "main.h"	// There is probably a smaller header to include.

/*
 * @brief: Sets the UART peripheral to listen for commands, serving as an abstraction layer.
 * @param: UART peripheral handle to begin listening for commands.
 */
void begin_command_handling(UART_HandleTypeDef* huart);

/*
 * @brief: User implementation of HAL driver function.
 * @note: Refer to the declaration of the function within HAL drivers.
 */
void HAL_UARTEx_RxEventCallback(UART_HandleTypeDef *huart, uint16_t Size);

/*
 * @brief: The command parsing and
 */
void command_handle(const uint8_t* command);

#endif /* INC_COMMAND_HANDLER_H_ */
