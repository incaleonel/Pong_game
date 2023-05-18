################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Firmware/FW_Adc.c \
../Firmware/FW_Gpio.c \
../Firmware/FW_Inicializacion.c \
../Firmware/FW_Lcd.c \
../Firmware/FW_Matriz.c \
../Firmware/FW_Oscilador.c \
../Firmware/FW_Systick.c \
../Firmware/FW_Teclado.c \
../Firmware/FW_Uart.c 

OBJS += \
./Firmware/FW_Adc.o \
./Firmware/FW_Gpio.o \
./Firmware/FW_Inicializacion.o \
./Firmware/FW_Lcd.o \
./Firmware/FW_Matriz.o \
./Firmware/FW_Oscilador.o \
./Firmware/FW_Systick.o \
./Firmware/FW_Teclado.o \
./Firmware/FW_Uart.o 

C_DEPS += \
./Firmware/FW_Adc.d \
./Firmware/FW_Gpio.d \
./Firmware/FW_Inicializacion.d \
./Firmware/FW_Lcd.d \
./Firmware/FW_Matriz.d \
./Firmware/FW_Oscilador.d \
./Firmware/FW_Systick.d \
./Firmware/FW_Teclado.d \
./Firmware/FW_Uart.d 


# Each subdirectory must supply rules for building sources it contributes
Firmware/%.o: ../Firmware/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DDEBUG -D__CODE_RED -DCORE_M3 -D__LPC17XX__ -D__REDLIB__ -I"C:\Users\Juani\Documents\LPCXpresso_8.1.4_606\workspace\ProyectoPong\inc" -O0 -fno-common -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


