# Get directory of this makefile
MAKEFILE_DIR := $(dir $(lastword $(MAKEFILE_LIST)))

# Specify the default makedefs file, which can be overridden at the command line
MAKEDEFS = $(MAKEFILE_DIR)makedefs
include $(MAKEDEFS)

# Always builds phony rules
.PHONY: all clean

# Builds driverlib.lib
all :
		@ rm -f $(MAKEFILE_DIR)driverlib.lib
		@ rm -f $(MAKEFILE_DIR)*.o
		$(COMPILER_TOOL) --version
		@ echo GCC: Compile adi.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "adi.o" $(MAKEFILE_DIR)../../../driverlib/adi.c
		@ echo GCC: Compile aes.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "aes.o" $(MAKEFILE_DIR)../../../driverlib/aes.c
		@ echo GCC: Compile aon_batmon.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "aon_batmon.o" $(MAKEFILE_DIR)../../../driverlib/aon_batmon.c
		@ echo GCC: Compile aon_event.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "aon_event.o" $(MAKEFILE_DIR)../../../driverlib/aon_event.c
		@ echo GCC: Compile aon_ioc.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "aon_ioc.o" $(MAKEFILE_DIR)../../../driverlib/aon_ioc.c
		@ echo GCC: Compile aon_pmctl.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "aon_pmctl.o" $(MAKEFILE_DIR)../../../driverlib/aon_pmctl.c
		@ echo GCC: Compile aon_rtc.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "aon_rtc.o" $(MAKEFILE_DIR)../../../driverlib/aon_rtc.c
		@ echo GCC: Compile aux_adc.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "aux_adc.o" $(MAKEFILE_DIR)../../../driverlib/aux_adc.c
		@ echo GCC: Compile aux_dac.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "aux_dac.o" $(MAKEFILE_DIR)../../../driverlib/aux_dac.c
		@ echo GCC: Compile aux_smph.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "aux_smph.o" $(MAKEFILE_DIR)../../../driverlib/aux_smph.c
		@ echo GCC: Compile aux_sysif.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "aux_sysif.o" $(MAKEFILE_DIR)../../../driverlib/aux_sysif.c
		@ echo GCC: Compile aux_tdc.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "aux_tdc.o" $(MAKEFILE_DIR)../../../driverlib/aux_tdc.c
		@ echo GCC: Compile ccfgread.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "ccfgread.o" $(MAKEFILE_DIR)../../../driverlib/ccfgread.c
		@ echo GCC: Compile chipinfo.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "chipinfo.o" $(MAKEFILE_DIR)../../../driverlib/chipinfo.c
		@ echo GCC: Compile cpu.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "cpu.o" $(MAKEFILE_DIR)../../../driverlib/cpu.c
		@ echo GCC: Compile ddi.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "ddi.o" $(MAKEFILE_DIR)../../../driverlib/ddi.c
		@ echo GCC: Compile debug.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "debug.o" $(MAKEFILE_DIR)../../../driverlib/debug.c
		@ echo GCC: Compile driverlib_release.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "driverlib_release.o" $(MAKEFILE_DIR)../../../driverlib/driverlib_release.c
		@ echo GCC: Compile event.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "event.o" $(MAKEFILE_DIR)../../../driverlib/event.c
		@ echo GCC: Compile flash.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "flash.o" $(MAKEFILE_DIR)../../../driverlib/flash.c
		@ echo GCC: Compile gpio.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "gpio.o" $(MAKEFILE_DIR)../../../driverlib/gpio.c
		@ echo GCC: Compile i2c.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "i2c.o" $(MAKEFILE_DIR)../../../driverlib/i2c.c
		@ echo GCC: Compile i2s.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "i2s.o" $(MAKEFILE_DIR)../../../driverlib/i2s.c
		@ echo GCC: Compile interrupt.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "interrupt.o" $(MAKEFILE_DIR)../../../driverlib/interrupt.c
		@ echo GCC: Compile ioc.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "ioc.o" $(MAKEFILE_DIR)../../../driverlib/ioc.c
		@ echo GCC: Compile osc.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "osc.o" $(MAKEFILE_DIR)../../../driverlib/osc.c
		@ echo GCC: Compile pka.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "pka.o" $(MAKEFILE_DIR)../../../driverlib/pka.c
		@ echo GCC: Compile prcm.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "prcm.o" $(MAKEFILE_DIR)../../../driverlib/prcm.c
		@ echo GCC: Compile pwr_ctrl.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "pwr_ctrl.o" $(MAKEFILE_DIR)../../../driverlib/pwr_ctrl.c
		@ echo GCC: Compile rom_crypto.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "rom_crypto.o" $(MAKEFILE_DIR)../../../driverlib/rom_crypto.c
		@ echo GCC: Compile setup.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "setup.o" $(MAKEFILE_DIR)../../../driverlib/setup.c
		@ echo GCC: Compile setup_rom.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "setup_rom.o" $(MAKEFILE_DIR)../../../driverlib/setup_rom.c
		@ echo GCC: Compile sha2.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "sha2.o" $(MAKEFILE_DIR)../../../driverlib/sha2.c
		@ echo GCC: Compile smph.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "smph.o" $(MAKEFILE_DIR)../../../driverlib/smph.c
		@ echo GCC: Compile ssi.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "ssi.o" $(MAKEFILE_DIR)../../../driverlib/ssi.c
		@ echo GCC: Compile sw_chacha.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "sw_chacha.o" $(MAKEFILE_DIR)../../../driverlib/sw_chacha.c
		@ echo GCC: Compile sw_poly1305-donna.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "sw_poly1305-donna.o" $(MAKEFILE_DIR)../../../driverlib/sw_poly1305-donna.c
		@ echo GCC: Compile systick.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "systick.o" $(MAKEFILE_DIR)../../../driverlib/systick.c
		@ echo GCC: Compile sys_ctrl.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "sys_ctrl.o" $(MAKEFILE_DIR)../../../driverlib/sys_ctrl.c
		@ echo GCC: Compile timer.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "timer.o" $(MAKEFILE_DIR)../../../driverlib/timer.c
		@ echo GCC: Compile trng.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "trng.o" $(MAKEFILE_DIR)../../../driverlib/trng.c
		@ echo GCC: Compile uart.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "uart.o" $(MAKEFILE_DIR)../../../driverlib/uart.c
		@ echo GCC: Compile udma.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "udma.o" $(MAKEFILE_DIR)../../../driverlib/udma.c
		@ echo GCC: Compile vims.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "vims.o" $(MAKEFILE_DIR)../../../driverlib/vims.c
		@ echo GCC: Compile watchdog.c
		@ $(COMPILER_TOOL) -mthumb -march=armv7e-m -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -Wall -fno-strict-aliasing -gstrict-dwarf -pedantic -ffunction-sections -fdata-sections -std=c99 -c --asm -g -o "watchdog.o" $(MAKEFILE_DIR)../../../driverlib/watchdog.c
		@ echo GCC: Archive driverlib.lib
		@ $(ARCHIVER_TOOL) rcs $(MAKEFILE_DIR)driverlib.lib $(MAKEFILE_DIR)adi.o $(MAKEFILE_DIR)aes.o $(MAKEFILE_DIR)aon_batmon.o $(MAKEFILE_DIR)aon_event.o $(MAKEFILE_DIR)aon_ioc.o $(MAKEFILE_DIR)aon_pmctl.o $(MAKEFILE_DIR)aon_rtc.o $(MAKEFILE_DIR)aux_adc.o $(MAKEFILE_DIR)aux_dac.o $(MAKEFILE_DIR)aux_smph.o $(MAKEFILE_DIR)aux_sysif.o $(MAKEFILE_DIR)aux_tdc.o $(MAKEFILE_DIR)ccfgread.o $(MAKEFILE_DIR)chipinfo.o $(MAKEFILE_DIR)cpu.o $(MAKEFILE_DIR)ddi.o $(MAKEFILE_DIR)debug.o $(MAKEFILE_DIR)driverlib_release.o $(MAKEFILE_DIR)event.o $(MAKEFILE_DIR)flash.o $(MAKEFILE_DIR)gpio.o $(MAKEFILE_DIR)i2c.o $(MAKEFILE_DIR)i2s.o $(MAKEFILE_DIR)interrupt.o $(MAKEFILE_DIR)ioc.o $(MAKEFILE_DIR)osc.o $(MAKEFILE_DIR)pka.o $(MAKEFILE_DIR)prcm.o $(MAKEFILE_DIR)pwr_ctrl.o $(MAKEFILE_DIR)rom_crypto.o $(MAKEFILE_DIR)setup.o $(MAKEFILE_DIR)setup_rom.o $(MAKEFILE_DIR)sha2.o $(MAKEFILE_DIR)smph.o $(MAKEFILE_DIR)ssi.o $(MAKEFILE_DIR)sw_chacha.o $(MAKEFILE_DIR)sw_poly1305-donna.o $(MAKEFILE_DIR)systick.o $(MAKEFILE_DIR)sys_ctrl.o $(MAKEFILE_DIR)timer.o $(MAKEFILE_DIR)trng.o $(MAKEFILE_DIR)uart.o $(MAKEFILE_DIR)udma.o $(MAKEFILE_DIR)vims.o $(MAKEFILE_DIR)watchdog.o
		@ rm -f $(MAKEFILE_DIR)*.o

# Deletes previous output and temporary files
clean :
		@ rm -fR $(MAKEFILE_DIR)*.o
		@ rm -fR $(MAKEFILE_DIR)*.lib
