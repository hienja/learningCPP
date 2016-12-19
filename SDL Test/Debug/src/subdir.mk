################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/SDL\ Test.cpp \
../src/Screen.cpp 

OBJS += \
./src/SDL\ Test.o \
./src/Screen.o 

CPP_DEPS += \
./src/SDL\ Test.d \
./src/Screen.d 


# Each subdirectory must supply rules for building sources it contributes
src/SDL\ Test.o: ../src/SDL\ Test.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/SDL Test.d" -MT"src/SDL\ Test.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


