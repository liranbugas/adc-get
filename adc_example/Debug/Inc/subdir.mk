################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Inc/adc.c \
../Inc/gpio.c \
../Inc/timer.c 

OBJS += \
./Inc/adc.o \
./Inc/gpio.o \
./Inc/timer.o 

C_DEPS += \
./Inc/adc.d \
./Inc/gpio.d \
./Inc/timer.d 


# Each subdirectory must supply rules for building sources it contributes
Inc/%.o Inc/%.su Inc/%.cyclo: ../Inc/%.c Inc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DNUCLEO_F401RE -DSTM32 -DSTM32F401RETx -DSTM32F4 -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Inc

clean-Inc:
	-$(RM) ./Inc/adc.cyclo ./Inc/adc.d ./Inc/adc.o ./Inc/adc.su ./Inc/gpio.cyclo ./Inc/gpio.d ./Inc/gpio.o ./Inc/gpio.su ./Inc/timer.cyclo ./Inc/timer.d ./Inc/timer.o ./Inc/timer.su

.PHONY: clean-Inc

