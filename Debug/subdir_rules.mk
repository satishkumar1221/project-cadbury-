################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
build-2462671:
	@$(MAKE) --no-print-directory -Onone -f subdir_rules.mk build-2462671-inproc

build-2462671-inproc: ../app.cfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: XDCtools'
	"/home/satish/ti/ccs920/xdctools_3_60_01_27_core/xs" --xdcpath="/home/satish/ti/bios_6_76_02_02/packages;" xdc.tools.configuro -o configPkg -t gnu.targets.arm.M4F -p ti.platforms.tiva:TM4C123GH6PM -r release -c "/home/satish/ti/ccs920/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

configPkg/linker.cmd: build-2462671 ../app.cfg
configPkg/compiler.opt: build-2462671
configPkg/: build-2462671

%.o: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: GNU Compiler'
	"/home/satish/ti/ccs920/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-gcc-7.2.1" -c -mcpu=cortex-m4 -march=armv7e-m -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DPART_TM4C123GH6PM -I"/home/satish/workspace_v9/esp8266_tm4c123/Source" -I"/home/satish/workspace_v9/esp8266_tm4c123/include" -I"/home/satish/workspace_v9/esp8266_tm4c123" -I"/home/satish/ti/bios_6_76_02_02/packages/gnu/targets/arm/libs/install-native/arm-none-eabi/include/newlib-nano" -I"/home/satish/ti/bios_6_76_02_02/packages/ti/posix/gcc" -I"/home/satish/ti/ccs920/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include" -Og -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -Wall -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -std=c99 $(GEN_OPTS__FLAG) -o"$@" "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '


