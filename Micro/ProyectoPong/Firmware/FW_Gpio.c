#include "Include.h"

void Gpio_SetPin( uint8_t Port , uint8_t Pin ,uint8_t Estado)
{
	if(Estado)
	{
		GPIOs[Port].FIOSET=(1<<Pin);
	}
	else
	{
		GPIOs[Port].FIOCLR=(1<<Pin);
	}
}

uint8_t Gpio_GetPin(uint8_t Port,uint8_t Pin)
{
	if(GPIOs[Port].FIOPIN & (1<<Pin))
	 return 1;
	else
	 return 0;
}

void Gpio_SetFunc(uint8_t port, uint8_t pin, uint8_t func) 		//PINSEL
{
	uint8_t nropinsel;

	if(pin >= 16)
	{
		nropinsel = (port *2) + 1;
	}

	else
	{
		nropinsel = (port *2);
	}

	switch (func)
	{
		case 0: //00
			PINSEL[nropinsel] &= ~ (3 << pin*2);
			break;

		case 1: //01
			PINSEL[nropinsel] |=  (1 << pin*2);
			PINSEL[nropinsel] &= ~ (1 << (pin*2+1));
			break;

		case 2: //10
			PINSEL[nropinsel] |= (1 << (pin*2+1));
			PINSEL[nropinsel] &= ~ (1 << pin*2);
			break;

		case 3:	//11
			PINSEL[nropinsel] |= (3 << pin*2);
			break;
	}
}
void Gpio_SetMode(uint8_t Port,uint8_t Pin, uint8_t Mode)
{
	int num;

		if(Pin<16)
		num=Port*2;
		else
		num=Port++;

		switch(Mode)
		{
		case 0: PINMODE[num] &= ~ ( 3 << Pin);
			break;
		case 1:	PINMODE[num] |= (1 << Pin);
			break;
		case 2:	PINMODE[num] |= (2 << Pin);
			break;
		case 3:	PINMODE[num] |= (3 << Pin);
			break;
		}

}
void Gpio_SetDir(uint8_t Port ,uint8_t Pin, uint8_t Direccion)
{
		switch(Direccion)
		{
			case 0:	GPIOs[Port].FIODIR &= ~(1<<Pin);
			 break;
			case 1: GPIOs[Port].FIODIR |= (1<<Pin);
			 break;
		}

}

