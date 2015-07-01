################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../HelloWorld.cc \
../factorial.cc \
../quadraticFunction.cc \
../square.cc 

CC_DEPS += \
./HelloWorld.d \
./factorial.d \
./quadraticFunction.d \
./square.d 

OBJS += \
./HelloWorld.o \
./factorial.o \
./quadraticFunction.o \
./square.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


