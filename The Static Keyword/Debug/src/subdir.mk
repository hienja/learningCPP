################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/The\ Static\ Keyword.cpp 

OBJS += \
./src/The\ Static\ Keyword.o 

CPP_DEPS += \
./src/The\ Static\ Keyword.d 


# Each subdirectory must supply rules for building sources it contributes
src/The\ Static\ Keyword.o: ../src/The\ Static\ Keyword.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/The Static Keyword.d" -MT"src/The\ Static\ Keyword.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


