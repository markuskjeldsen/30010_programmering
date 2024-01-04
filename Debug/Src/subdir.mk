################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/30010_io.c \
../Src/ansi.c \
../Src/main.c \
../Src/project4.c \
../Src/sin_lut.c \
../Src/syscalls.c \
../Src/sysmem.c \
../Src/system_stm32f30x.c 

OBJS += \
./Src/30010_io.o \
./Src/ansi.o \
./Src/main.o \
./Src/project4.o \
./Src/sin_lut.o \
./Src/syscalls.o \
./Src/sysmem.o \
./Src/system_stm32f30x.o 

C_DEPS += \
./Src/30010_io.d \
./Src/ansi.d \
./Src/main.d \
./Src/project4.d \
./Src/sin_lut.d \
./Src/syscalls.d \
./Src/sysmem.d \
./Src/system_stm32f30x.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F302R8Tx -DSTM32F3 -DNUCLEO_F302R8 -DDEBUG -DUSE_STDPERIPH_DRIVER=1 -c -I"/home/markus/STM32CubeIDE/workspace_1.14.0/BaseProject/SPL/inc" -I"/home/markus/STM32CubeIDE/workspace_1.14.0/BaseProject/Inc" -I"/home/markus/STM32CubeIDE/workspace_1.14.0/BaseProject/cmsis" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/main.o: ../Src/main.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F302R8Tx -DSTM32F3 -DNUCLEO_F302R8 -DDEBUG -DUSE_STDPERIPH_DRIVER=1 -c -I"/home/markus/STM32CubeIDE/workspace_1.14.0/BaseProject/SPL/inc" -I"/home/markus/STM32CubeIDE/workspace_1.14.0/BaseProject/Inc" -I"/home/markus/STM32CubeIDE/workspace_1.14.0/BaseProject/cmsis" -O0 -ffunction-sections -fdata-sections -Wall -fcommon -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/30010_io.cyclo ./Src/30010_io.d ./Src/30010_io.o ./Src/30010_io.su ./Src/ansi.cyclo ./Src/ansi.d ./Src/ansi.o ./Src/ansi.su ./Src/main.cyclo ./Src/main.d ./Src/main.o ./Src/main.su ./Src/project4.cyclo ./Src/project4.d ./Src/project4.o ./Src/project4.su ./Src/sin_lut.cyclo ./Src/sin_lut.d ./Src/sin_lut.o ./Src/sin_lut.su ./Src/syscalls.cyclo ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.cyclo ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su ./Src/system_stm32f30x.cyclo ./Src/system_stm32f30x.d ./Src/system_stm32f30x.o ./Src/system_stm32f30x.su

.PHONY: clean-Src

