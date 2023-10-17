################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/ICU/subdir.mk
-include MCAL/GPIO/subdir.mk
-include MCAL/GLOBAL_INTERRUPT/subdir.mk
-include HAL/ULTRA_SONIC_SENSOR/subdir.mk
-include HAL/LCD/subdir.mk
-include App/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
ultra_sonic_drive.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: ultra_sonic_drive.elf secondary-outputs

# Tool invocations
ultra_sonic_drive.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,ultra_sonic_drive.map -mmcu=atmega32 -o "ultra_sonic_drive.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

ultra_sonic_drive.lss: ultra_sonic_drive.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S ultra_sonic_drive.elf  >"ultra_sonic_drive.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: ultra_sonic_drive.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 ultra_sonic_drive.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) ultra_sonic_drive.elf
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
