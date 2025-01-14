var commonSources = [
    "ADC.c",
    "I2C.c",
    "NVS.c",
    "./nvs/NVSRAM.c",
    "./nvs/NVSSPI25X.c",
    "PWM.c",
    "SD.c",
    "./sd/SDSPI.c",
    "SDFatFS.c",
    "SPI.c",
    "Timer.c",
    "UART.c",
    "UART2.c",
    "Watchdog.c",
    "./utils/List.c",
    "./utils/RingBuf.c",
    "./utils/Random.c",
    "./utils/StructRingBuf.c",
    "./apps/LED.c",
    "./apps/Button.c"
];

var commonHeaders = [
    "ADC.h",
    "Board.h",
    "GPIO.h",
    "I2C.h",
    "./i2c/I2CSupport.h",
    "itm/hw_cpu_dwt.h",
    "itm/hw_cpu_scs.h",
    "itm/hw_cpu_tpiu.h",
    "itm/hw_cpu_itm.h",
    "NVS.h",
    "./nvs/NVSRAM.h",
    "./nvs/NVSSPI25X.h",
    "Power.h",
    "PWM.h",
    "SD.h",
    "./sd/SDSPI.h",
    "SDFatFS.h",
    "SPI.h",
    "Timer.h",
    "./timer/TimerSupport.h",
    "UART.h",
    "UART2.h",
    "./uart2/UART2Support.h",
    "Watchdog.h",
    "./dpl/ClockP.h",
    "./dpl/DebugP.h",
    "./dpl/HwiP.h",
    "./dpl/MutexP.h",
    "./dpl/SemaphoreP.h",
    "./dpl/SwiP.h",
    "./dpl/SystemP.h",
    "./utils/List.h",
    "./utils/RingBuf.h",
    "./utils/Random.h",
    "./utils/StructRingBuf.h",
    "./apps/LED.h",
    "./apps/Button.h"
];
