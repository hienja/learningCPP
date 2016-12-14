################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Cat.cpp \
../src/Constructor\ and\ Destructors.cpp 

OBJS += \
./src/Cat.o \
./src/Constructor\ and\ Destructors.o 

CPP_DEPS += \
./src/Cat.d \
./src/Constructor\ and\ Destructors.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Constructor\ and\ Destructors.o: ../src/Constructor\ and\ Destructors.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Constructor and Destructors.d" -MT"src/Constructor\ and\ Destructors.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


