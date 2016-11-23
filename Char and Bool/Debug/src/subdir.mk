################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Char\ and\ Bool.cpp 

OBJS += \
./src/Char\ and\ Bool.o 

CPP_DEPS += \
./src/Char\ and\ Bool.d 


# Each subdirectory must supply rules for building sources it contributes
src/Char\ and\ Bool.o: ../src/Char\ and\ Bool.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Char and Bool.d" -MT"src/Char\ and\ Bool.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


