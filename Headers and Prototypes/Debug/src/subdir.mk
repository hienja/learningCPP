################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Headers\ and\ Prototypes.cpp 

OBJS += \
./src/Headers\ and\ Prototypes.o 

CPP_DEPS += \
./src/Headers\ and\ Prototypes.d 


# Each subdirectory must supply rules for building sources it contributes
src/Headers\ and\ Prototypes.o: ../src/Headers\ and\ Prototypes.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Headers and Prototypes.d" -MT"src/Headers\ and\ Prototypes.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


