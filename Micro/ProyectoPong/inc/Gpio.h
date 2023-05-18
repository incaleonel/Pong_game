/*
 * gpio.h
 *
 *  Created on: 6 de set. de 2016
 *      Author: leonel
 */

#ifndef GPIO_H_
#define GPIO_H_

#include "Regs.h"
#include "Include.h"

void Gpio_SetPin( uint8_t Port , uint8_t Pin ,uint8_t Estado);
uint8_t Gpio_GetPin(uint8_t Port,uint8_t Pin);
void Gpio_SetFunc(uint8_t Port,uint8_t Pin, uint8_t Func);
void Gpio_SetMode(uint8_t Port,uint8_t Pin, uint8_t Mode);
void Gpio_SetDir(uint8_t Port ,uint8_t Pin, uint8_t Direccion);
#endif /* GPIO_H_ */
