/*
 * UART.h
 *
 *  Created on: 12 de set. de 2016
 *      Author: Juani
 */

#ifndef UART_H_
#define UART_H_

void UART0_RX(void);
void UART0_TX(void);
int32_t UART0_LEER(void);
void UART0_ESCRIBIR (uint8_t * datos, uint8_t longitud);
uint8_t UART_TRAMA(uint8_t *Posiciones, uint8_t *Estado);
void PUSH_TX (uint8_t);
int8_t POP_TX(void);
void PUSH_RX(uint8_t);
int8_t POP_RX (void);
void UART0_INIT(int32_t BaudRate, int32_t Nbits, int32_t Parity, int32_t StopBit);
void InitPLL();


#endif /* UART_H_ */
