################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Return\ Object\ from\ Functions.cpp 

OBJS += \
./src/Return\ Object\ from\ Functions.o 

CPP_DEPS += \
./src/Return\ Object\ from\ Functions.d 


# Each subdirectory must supply rules for building sources it contributes
src/Return\ Object\ from\ Functions.o: ../src/Return\ Object\ from\ Functions.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Return Object from Functions.d" -MT"src/Return\ Object\ from\ Functions.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


