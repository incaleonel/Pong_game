################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/Adc.c \
../Drivers/Gpio.c \
../Drivers/Lcd.c \
../Drivers/Matriz.c \
../Drivers/Oscilador.c \
../Drivers/Systick.c \
../Drivers/Teclado.c \
../Drivers/Uart.c 

OBJS += \
./Drivers/Adc.o \
./Drivers/Gpio.o \
./Drivers/Lcd.o \
./Drivers/Matriz.o \
./Drivers/Oscilador.o \
./Drivers/Systick.o \
./Drivers/Teclado.o \
./Drivers/Uart.o 

C_DEPS += \
./Drivers/Adc.d \
./Drivers/Gpio.d \
./Drivers/Lcd.d \
./Drivers/Matriz.d \
./Drivers/Oscilador.d \
./Drivers/Systick.d \
./Drivers/Teclado.d \
./Drivers/Uart.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/%.o: ../Drivers/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DDEBUG -D__CODE_RED -DCORE_M3 -D__LPC17XX__ -D__REDLIB__ -I"C:\Users\Juani\Documents\LPCXpresso_8.1.4_606\workspace\ProyectoPong\inc" -O0 -fno-common -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


