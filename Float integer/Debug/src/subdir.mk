################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Float\ integer.cpp 

OBJS += \
./src/Float\ integer.o 

CPP_DEPS += \
./src/Float\ integer.d 


# Each subdirectory must supply rules for building sources it contributes
src/Float\ integer.o: ../src/Float\ integer.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Float integer.d" -MT"src/Float\ integer.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


