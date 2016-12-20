################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Bitwise\ And.cpp 

OBJS += \
./src/Bitwise\ And.o 

CPP_DEPS += \
./src/Bitwise\ And.d 


# Each subdirectory must supply rules for building sources it contributes
src/Bitwise\ And.o: ../src/Bitwise\ And.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Bitwise And.d" -MT"src/Bitwise\ And.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


