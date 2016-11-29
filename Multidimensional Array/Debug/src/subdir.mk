################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Multidimensional\ Array.cpp 

OBJS += \
./src/Multidimensional\ Array.o 

CPP_DEPS += \
./src/Multidimensional\ Array.d 


# Each subdirectory must supply rules for building sources it contributes
src/Multidimensional\ Array.o: ../src/Multidimensional\ Array.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Multidimensional Array.d" -MT"src/Multidimensional\ Array.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


