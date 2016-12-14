################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Constructor\ Initialization\ Lists.cpp \
../src/Person.cpp 

OBJS += \
./src/Constructor\ Initialization\ Lists.o \
./src/Person.o 

CPP_DEPS += \
./src/Constructor\ Initialization\ Lists.d \
./src/Person.d 


# Each subdirectory must supply rules for building sources it contributes
src/Constructor\ Initialization\ Lists.o: ../src/Constructor\ Initialization\ Lists.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Constructor Initialization Lists.d" -MT"src/Constructor\ Initialization\ Lists.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


