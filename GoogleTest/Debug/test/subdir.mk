################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../test/test_factorial.cpp \
../test/test_main.cpp \
../test/test_operations.cpp 

OBJS += \
./test/test_factorial.o \
./test/test_main.o \
./test/test_operations.o 

CPP_DEPS += \
./test/test_factorial.d \
./test/test_main.d \
./test/test_operations.d 


# Each subdirectory must supply rules for building sources it contributes
test/%.o: ../test/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/home/selim/workspace/GoogleTest/gtest_src" -I"/home/selim/workspace/GoogleTest/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


