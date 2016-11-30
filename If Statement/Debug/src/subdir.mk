################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/If\ Statement.cpp 

OBJS += \
./src/If\ Statement.o 

CPP_DEPS += \
./src/If\ Statement.d 


# Each subdirectory must supply rules for building sources it contributes
src/If\ Statement.o: ../src/If\ Statement.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/If Statement.d" -MT"src/If\ Statement.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


