################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Output\ Text.cpp 

OBJS += \
./src/Output\ Text.o 

CPP_DEPS += \
./src/Output\ Text.d 


# Each subdirectory must supply rules for building sources it contributes
src/Output\ Text.o: ../src/Output\ Text.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Output Text.d" -MT"src/Output\ Text.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


