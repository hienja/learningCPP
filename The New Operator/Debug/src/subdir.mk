################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/The\ New\ Operator.cpp 

OBJS += \
./src/The\ New\ Operator.o 

CPP_DEPS += \
./src/The\ New\ Operator.d 


# Each subdirectory must supply rules for building sources it contributes
src/The\ New\ Operator.o: ../src/The\ New\ Operator.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/The New Operator.d" -MT"src/The\ New\ Operator.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


