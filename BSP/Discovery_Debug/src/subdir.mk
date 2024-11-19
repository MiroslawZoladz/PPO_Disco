################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Keyboard.cpp \
../src/KeyboardTsLcd.cpp \
../src/LedLcd.cpp 

CXX_SRCS += \
../src/main.cxx 

OBJS += \
./src/Keyboard.o \
./src/KeyboardTsLcd.o \
./src/LedLcd.o \
./src/main.o 

CXX_DEPS += \
./src/main.d 

CPP_DEPS += \
./src/Keyboard.d \
./src/KeyboardTsLcd.d \
./src/LedLcd.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o src/%.su src/%.cyclo: ../src/%.cpp src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_STM32F429I_DISCO -DSTM32F429xx -c -I"C:/Users/User/OneDrive/Biezace/Dydaktyka/Przedmioty/2025/PPO/workspace/BSP/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/User/OneDrive/Biezace/Dydaktyka/Przedmioty/2025/PPO/workspace/BSP/Drivers/CMSIS/Include" -I"C:/Users/User/OneDrive/Biezace/Dydaktyka/Przedmioty/2025/PPO/workspace/BSP/Drivers/BSP/STM32F429I-Discovery" -I"C:/Users/User/OneDrive/Biezace/Dydaktyka/Przedmioty/2025/PPO/workspace/BSP/Drivers/STM32F4xx_HAL_Driver/Inc" -I"C:/Users/User/OneDrive/Biezace/Dydaktyka/Przedmioty/2025/PPO/workspace/BSP/Drivers/User" -I"C:/Users/User/OneDrive/Biezace/Dydaktyka/Przedmioty/2025/PPO/workspace/BSP/Drivers" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
src/%.o src/%.su src/%.cyclo: ../src/%.cxx src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_STM32F429I_DISCO -DSTM32F429xx -c -I"C:/Users/User/OneDrive/Biezace/Dydaktyka/Przedmioty/2025/PPO/workspace/BSP/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/User/OneDrive/Biezace/Dydaktyka/Przedmioty/2025/PPO/workspace/BSP/Drivers/CMSIS/Include" -I"C:/Users/User/OneDrive/Biezace/Dydaktyka/Przedmioty/2025/PPO/workspace/BSP/Drivers/BSP/STM32F429I-Discovery" -I"C:/Users/User/OneDrive/Biezace/Dydaktyka/Przedmioty/2025/PPO/workspace/BSP/Drivers/STM32F4xx_HAL_Driver/Inc" -I"C:/Users/User/OneDrive/Biezace/Dydaktyka/Przedmioty/2025/PPO/workspace/BSP/Drivers/User" -I"C:/Users/User/OneDrive/Biezace/Dydaktyka/Przedmioty/2025/PPO/workspace/BSP/Drivers" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-src

clean-src:
	-$(RM) ./src/Keyboard.cyclo ./src/Keyboard.d ./src/Keyboard.o ./src/Keyboard.su ./src/KeyboardTsLcd.cyclo ./src/KeyboardTsLcd.d ./src/KeyboardTsLcd.o ./src/KeyboardTsLcd.su ./src/LedLcd.cyclo ./src/LedLcd.d ./src/LedLcd.o ./src/LedLcd.su ./src/main.cyclo ./src/main.d ./src/main.o ./src/main.su

.PHONY: clean-src

