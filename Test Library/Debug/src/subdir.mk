################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Test\ Library.cpp 

OBJS += \
./src/Test\ Library.o 

CPP_DEPS += \
./src/Test\ Library.d 


# Each subdirectory must supply rules for building sources it contributes
src/Test\ Library.o: ../src/Test\ Library.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I/home/hienja/learningCPP/animals/ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Test Library.d" -MT"src/Test\ Library.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


