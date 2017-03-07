/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'cpu_1' in SOPC Builder design 'ECE423_QSYS'
 * SOPC Builder design path: C:/Users/ggowripa/Documents/ece423/ECE423_QSYS.sopcinfo
 *
 * Generated: Tue Mar 07 13:38:48 EST 2017
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

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x20000820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 125000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1e
#define ALT_CPU_DCACHE_BYPASS_MASK 0x80000000
#define ALT_CPU_DCACHE_LINE_SIZE 32
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_DCACHE_SIZE 16384
#define ALT_CPU_EXCEPTION_ADDR 0x200c0020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 125000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_EXTRA_EXCEPTION_INFO
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INITDA_SUPPORTED
#define ALT_CPU_INST_ADDR_WIDTH 0x1e
#define ALT_CPU_NAME "cpu_1"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x200c0000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x20000820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 125000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x1e
#define NIOS2_DCACHE_BYPASS_MASK 0x80000000
#define NIOS2_DCACHE_LINE_SIZE 32
#define NIOS2_DCACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_SIZE 16384
#define NIOS2_EXCEPTION_ADDR 0x200c0020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_EXTRA_EXCEPTION_INFO
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INITDA_SUPPORTED
#define NIOS2_INST_ADDR_WIDTH 0x1e
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x200c0000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_MAILBOX_SIMPLE
#define __ALTERA_AVALON_MUTEX
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_AVALON_TIMER
#define __ALTERA_GENERIC_TRISTATE_CONTROLLER
#define __ALTERA_MEM_IF_LPDDR2_EMIF
#define __ALTERA_NIOS2_GEN2
#define __SD_CONT


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_1"
#define ALT_STDERR_BASE 0x200014a0
#define ALT_STDERR_DEV jtag_uart_1
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_1"
#define ALT_STDIN_BASE 0x200014a0
#define ALT_STDIN_DEV jtag_uart_1
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_1"
#define ALT_STDOUT_BASE 0x200014a0
#define ALT_STDOUT_DEV jtag_uart_1
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "ECE423_QSYS"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK TIMER_1_0


/*
 * jtag_uart_1 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_1 altera_avalon_jtag_uart
#define JTAG_UART_1_BASE 0x200014a0
#define JTAG_UART_1_IRQ 2
#define JTAG_UART_1_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_1_NAME "/dev/jtag_uart_1"
#define JTAG_UART_1_READ_DEPTH 64
#define JTAG_UART_1_READ_THRESHOLD 8
#define JTAG_UART_1_SPAN 8
#define JTAG_UART_1_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_1_WRITE_DEPTH 64
#define JTAG_UART_1_WRITE_THRESHOLD 8


/*
 * lpddr2 configuration
 *
 */

#define ALT_MODULE_CLASS_lpddr2 altera_mem_if_lpddr2_emif
#define LPDDR2_BASE 0x0
#define LPDDR2_IRQ -1
#define LPDDR2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LPDDR2_NAME "/dev/lpddr2"
#define LPDDR2_SPAN 536870912
#define LPDDR2_TYPE "altera_mem_if_lpddr2_emif"


/*
 * mailbox_simple_cpu0_to_cpu1 configuration
 *
 */

#define ALT_MODULE_CLASS_mailbox_simple_cpu0_to_cpu1 altera_avalon_mailbox_simple
#define MAILBOX_SIMPLE_CPU0_TO_CPU1_BASE 0x20001490
#define MAILBOX_SIMPLE_CPU0_TO_CPU1_IRQ 1
#define MAILBOX_SIMPLE_CPU0_TO_CPU1_IRQ_INTERRUPT_CONTROLLER_ID 0
#define MAILBOX_SIMPLE_CPU0_TO_CPU1_NAME "/dev/mailbox_simple_cpu0_to_cpu1"
#define MAILBOX_SIMPLE_CPU0_TO_CPU1_SPAN 16
#define MAILBOX_SIMPLE_CPU0_TO_CPU1_TYPE "altera_avalon_mailbox_simple"


/*
 * mailbox_simple_cpu1_to_cpu0 configuration
 *
 */

#define ALT_MODULE_CLASS_mailbox_simple_cpu1_to_cpu0 altera_avalon_mailbox_simple
#define MAILBOX_SIMPLE_CPU1_TO_CPU0_BASE 0x20001480
#define MAILBOX_SIMPLE_CPU1_TO_CPU0_IRQ 0
#define MAILBOX_SIMPLE_CPU1_TO_CPU0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define MAILBOX_SIMPLE_CPU1_TO_CPU0_NAME "/dev/mailbox_simple_cpu1_to_cpu0"
#define MAILBOX_SIMPLE_CPU1_TO_CPU0_SPAN 16
#define MAILBOX_SIMPLE_CPU1_TO_CPU0_TYPE "altera_avalon_mailbox_simple"


/*
 * mutex_0 configuration
 *
 */

#define ALT_MODULE_CLASS_mutex_0 altera_avalon_mutex
#define MUTEX_0_BASE 0x201011e0
#define MUTEX_0_IRQ -1
#define MUTEX_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MUTEX_0_NAME "/dev/mutex_0"
#define MUTEX_0_OWNER_INIT 0
#define MUTEX_0_OWNER_WIDTH 16
#define MUTEX_0_SPAN 8
#define MUTEX_0_TYPE "altera_avalon_mutex"
#define MUTEX_0_VALUE_INIT 0
#define MUTEX_0_VALUE_WIDTH 16


/*
 * sd_cont configuration
 *
 */

#define ALT_MODULE_CLASS_sd_cont sd_cont
#define SD_CONT_BASE 0x20001000
#define SD_CONT_IRQ -1
#define SD_CONT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SD_CONT_NAME "/dev/sd_cont"
#define SD_CONT_SPAN 1024
#define SD_CONT_TYPE "sd_cont"


/*
 * sram configuration
 *
 */

#define ALT_MODULE_CLASS_sram altera_generic_tristate_controller
#define SRAM_BASE 0x20080000
#define SRAM_IRQ -1
#define SRAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SRAM_NAME "/dev/sram"
#define SRAM_SPAN 524288
#define SRAM_SRAM_MEMORY_SIZE 524288
#define SRAM_SRAM_MEMORY_UNITS 1
#define SRAM_SSRAM_DATA_WIDTH 16
#define SRAM_TYPE "altera_generic_tristate_controller"


/*
 * sysid configuration
 *
 */

#define ALT_MODULE_CLASS_sysid altera_avalon_sysid_qsys
#define SYSID_BASE 0x201011e8
#define SYSID_ID 0
#define SYSID_IRQ -1
#define SYSID_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_NAME "/dev/sysid"
#define SYSID_SPAN 8
#define SYSID_TIMESTAMP 1488904293
#define SYSID_TYPE "altera_avalon_sysid_qsys"


/*
 * timer_1_0 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_1_0 altera_avalon_timer
#define TIMER_1_0_ALWAYS_RUN 0
#define TIMER_1_0_BASE 0x20001440
#define TIMER_1_0_COUNTER_SIZE 64
#define TIMER_1_0_FIXED_PERIOD 0
#define TIMER_1_0_FREQ 125000000
#define TIMER_1_0_IRQ 4
#define TIMER_1_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_1_0_LOAD_VALUE 124
#define TIMER_1_0_MULT 1.0E-6
#define TIMER_1_0_NAME "/dev/timer_1_0"
#define TIMER_1_0_PERIOD 1
#define TIMER_1_0_PERIOD_UNITS "us"
#define TIMER_1_0_RESET_OUTPUT 0
#define TIMER_1_0_SNAPSHOT 1
#define TIMER_1_0_SPAN 64
#define TIMER_1_0_TICKS_PER_SEC 1000000
#define TIMER_1_0_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_1_0_TYPE "altera_avalon_timer"


/*
 * timer_1_1 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_1_1 altera_avalon_timer
#define TIMER_1_1_ALWAYS_RUN 0
#define TIMER_1_1_BASE 0x20001400
#define TIMER_1_1_COUNTER_SIZE 64
#define TIMER_1_1_FIXED_PERIOD 0
#define TIMER_1_1_FREQ 125000000
#define TIMER_1_1_IRQ 3
#define TIMER_1_1_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_1_1_LOAD_VALUE 124
#define TIMER_1_1_MULT 1.0E-6
#define TIMER_1_1_NAME "/dev/timer_1_1"
#define TIMER_1_1_PERIOD 1
#define TIMER_1_1_PERIOD_UNITS "us"
#define TIMER_1_1_RESET_OUTPUT 0
#define TIMER_1_1_SNAPSHOT 1
#define TIMER_1_1_SPAN 64
#define TIMER_1_1_TICKS_PER_SEC 1000000
#define TIMER_1_1_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_1_1_TYPE "altera_avalon_timer"

#endif /* __SYSTEM_H_ */
