/*
 * adc.h
 *
 *  Created on: 21/10/2013
 *      Author: Gos
 */

#ifndef ADC_H_
#define ADC_H_

#include "Include.h"
#include "Regs.h"

void ADC_Inic(void);
uint8_t ADC_Posicion(uint32_t Posicion);
void ADC_Antirrebote(void);

#endif /* ADC_H_ */
