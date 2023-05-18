################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Primitivas/PR_Lcd.c \
../Primitivas/PR_Matriz.c \
../Primitivas/PR_Teclado.c \
../Primitivas/PR_Uart.c 

OBJS += \
./Primitivas/PR_Lcd.o \
./Primitivas/PR_Matriz.o \
./Primitivas/PR_Teclado.o \
./Primitivas/PR_Uart.o 

C_DEPS += \
./Primitivas/PR_Lcd.d \
./Primitivas/PR_Matriz.d \
./Primitivas/PR_Teclado.d \
./Primitivas/PR_Uart.d 


# Each subdirectory must supply rules for building sources it contributes
Primitivas/%.o: ../Primitivas/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DDEBUG -D__CODE_RED -DCORE_M3 -D__LPC17XX__ -D__REDLIB__ -I"C:\Users\Juani\Documents\LPCXpresso_8.1.4_606\workspace\ProyectoPong\inc" -O0 -fno-common -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


