/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_qsys' in SOPC Builder design 'my_processor'
 * SOPC Builder design path: F:/Estudos/Contador_via_C/my_processor.sopcinfo
 *
 * Generated: Wed Feb 15 12:33:56 BRST 2023
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x8820
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x10
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x4020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x10
#define ALT_CPU_NAME "nios2_qsys"
#define ALT_CPU_RESET_ADDR 0x4000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x8820
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x10
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x4020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x10
#define NIOS2_RESET_ADDR 0x4000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_QSYS


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_BASE 0x9108
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_BASE 0x9108
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_BASE 0x9108
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "my_processor"


/*
 * dado configuration
 *
 */

#define ALT_MODULE_CLASS_dado altera_avalon_pio
#define DADO_BASE 0x90f0
#define DADO_BIT_CLEARING_EDGE_REGISTER 0
#define DADO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define DADO_CAPTURE 0
#define DADO_DATA_WIDTH 4
#define DADO_DO_TEST_BENCH_WIRING 0
#define DADO_DRIVEN_SIM_VALUE 0
#define DADO_EDGE_TYPE "NONE"
#define DADO_FREQ 50000000
#define DADO_HAS_IN 0
#define DADO_HAS_OUT 1
#define DADO_HAS_TRI 0
#define DADO_IRQ -1
#define DADO_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DADO_IRQ_TYPE "NONE"
#define DADO_NAME "/dev/dado"
#define DADO_RESET_VALUE 0
#define DADO_SPAN 16
#define DADO_TYPE "altera_avalon_pio"


/*
 * enable configuration
 *
 */

#define ALT_MODULE_CLASS_enable altera_avalon_pio
#define ENABLE_BASE 0x90a0
#define ENABLE_BIT_CLEARING_EDGE_REGISTER 0
#define ENABLE_BIT_MODIFYING_OUTPUT_REGISTER 0
#define ENABLE_CAPTURE 0
#define ENABLE_DATA_WIDTH 1
#define ENABLE_DO_TEST_BENCH_WIRING 0
#define ENABLE_DRIVEN_SIM_VALUE 0
#define ENABLE_EDGE_TYPE "NONE"
#define ENABLE_FREQ 50000000
#define ENABLE_HAS_IN 0
#define ENABLE_HAS_OUT 1
#define ENABLE_HAS_TRI 0
#define ENABLE_IRQ -1
#define ENABLE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ENABLE_IRQ_TYPE "NONE"
#define ENABLE_NAME "/dev/enable"
#define ENABLE_RESET_VALUE 0
#define ENABLE_SPAN 16
#define ENABLE_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 4
#define ALT_SYS_CLK TIMER
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart altera_avalon_jtag_uart
#define JTAG_UART_BASE 0x9108
#define JTAG_UART_IRQ 0
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/jtag_uart"
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_SPAN 8
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


/*
 * key configuration
 *
 */

#define ALT_MODULE_CLASS_key altera_avalon_pio
#define KEY_BASE 0x90c0
#define KEY_BIT_CLEARING_EDGE_REGISTER 0
#define KEY_BIT_MODIFYING_OUTPUT_REGISTER 0
#define KEY_CAPTURE 0
#define KEY_DATA_WIDTH 4
#define KEY_DO_TEST_BENCH_WIRING 0
#define KEY_DRIVEN_SIM_VALUE 0
#define KEY_EDGE_TYPE "NONE"
#define KEY_FREQ 50000000
#define KEY_HAS_IN 1
#define KEY_HAS_OUT 0
#define KEY_HAS_TRI 0
#define KEY_IRQ -1
#define KEY_IRQ_INTERRUPT_CONTROLLER_ID -1
#define KEY_IRQ_TYPE "NONE"
#define KEY_NAME "/dev/key"
#define KEY_RESET_VALUE 0
#define KEY_SPAN 16
#define KEY_TYPE "altera_avalon_pio"


/*
 * led_yellow configuration
 *
 */

#define ALT_MODULE_CLASS_led_yellow altera_avalon_pio
#define LED_YELLOW_BASE 0x90b0
#define LED_YELLOW_BIT_CLEARING_EDGE_REGISTER 0
#define LED_YELLOW_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_YELLOW_CAPTURE 0
#define LED_YELLOW_DATA_WIDTH 4
#define LED_YELLOW_DO_TEST_BENCH_WIRING 0
#define LED_YELLOW_DRIVEN_SIM_VALUE 0
#define LED_YELLOW_EDGE_TYPE "NONE"
#define LED_YELLOW_FREQ 50000000
#define LED_YELLOW_HAS_IN 0
#define LED_YELLOW_HAS_OUT 1
#define LED_YELLOW_HAS_TRI 0
#define LED_YELLOW_IRQ -1
#define LED_YELLOW_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED_YELLOW_IRQ_TYPE "NONE"
#define LED_YELLOW_NAME "/dev/led_yellow"
#define LED_YELLOW_RESET_VALUE 0
#define LED_YELLOW_SPAN 16
#define LED_YELLOW_TYPE "altera_avalon_pio"


/*
 * local configuration
 *
 */

#define ALT_MODULE_CLASS_local altera_avalon_pio
#define LOCAL_BASE 0x90d0
#define LOCAL_BIT_CLEARING_EDGE_REGISTER 0
#define LOCAL_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LOCAL_CAPTURE 0
#define LOCAL_DATA_WIDTH 2
#define LOCAL_DO_TEST_BENCH_WIRING 0
#define LOCAL_DRIVEN_SIM_VALUE 0
#define LOCAL_EDGE_TYPE "NONE"
#define LOCAL_FREQ 50000000
#define LOCAL_HAS_IN 0
#define LOCAL_HAS_OUT 1
#define LOCAL_HAS_TRI 0
#define LOCAL_IRQ -1
#define LOCAL_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LOCAL_IRQ_TYPE "NONE"
#define LOCAL_NAME "/dev/local"
#define LOCAL_RESET_VALUE 0
#define LOCAL_SPAN 16
#define LOCAL_TYPE "altera_avalon_pio"


/*
 * modo configuration
 *
 */

#define ALT_MODULE_CLASS_modo altera_avalon_pio
#define MODO_BASE 0x90e0
#define MODO_BIT_CLEARING_EDGE_REGISTER 0
#define MODO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define MODO_CAPTURE 0
#define MODO_DATA_WIDTH 2
#define MODO_DO_TEST_BENCH_WIRING 0
#define MODO_DRIVEN_SIM_VALUE 0
#define MODO_EDGE_TYPE "NONE"
#define MODO_FREQ 50000000
#define MODO_HAS_IN 0
#define MODO_HAS_OUT 1
#define MODO_HAS_TRI 0
#define MODO_IRQ -1
#define MODO_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MODO_IRQ_TYPE "NONE"
#define MODO_NAME "/dev/modo"
#define MODO_RESET_VALUE 0
#define MODO_SPAN 16
#define MODO_TYPE "altera_avalon_pio"


/*
 * onchip_memory2 configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_memory2 altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_BASE 0x4000
#define ONCHIP_MEMORY2_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_DUAL_PORT 0
#define ONCHIP_MEMORY2_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_INIT_CONTENTS_FILE "my_processor_onchip_memory2"
#define ONCHIP_MEMORY2_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY2_IRQ -1
#define ONCHIP_MEMORY2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEMORY2_NAME "/dev/onchip_memory2"
#define ONCHIP_MEMORY2_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY2_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_SIZE_VALUE 14096
#define ONCHIP_MEMORY2_SPAN 14096
#define ONCHIP_MEMORY2_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY2_WRITABLE 1


/*
 * timer configuration
 *
 */

#define ALT_MODULE_CLASS_timer altera_avalon_timer
#define TIMER_ALWAYS_RUN 0
#define TIMER_BASE 0x9020
#define TIMER_COUNTER_SIZE 32
#define TIMER_FIXED_PERIOD 0
#define TIMER_FREQ 50000000
#define TIMER_IRQ 1
#define TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_LOAD_VALUE 49999
#define TIMER_MULT 0.0010
#define TIMER_NAME "/dev/timer"
#define TIMER_PERIOD 1
#define TIMER_PERIOD_UNITS "ms"
#define TIMER_RESET_OUTPUT 0
#define TIMER_SNAPSHOT 1
#define TIMER_SPAN 32
#define TIMER_TICKS_PER_SEC 1000.0
#define TIMER_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_TYPE "altera_avalon_timer"

#endif /* __SYSTEM_H_ */
