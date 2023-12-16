#ifndef __CONFIG_H__
#define __CONFIG_H__

//basic
#define CONFIG_ISA "riscv32"
#define CONFIG_STEP_PRINT 1

//memory
#define CONFIG_PC_RESET_OFFSET 0x0
#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000
#define CONFIG_PMEM_MALLOC 1

//TRACE
 //#define CONFIG_ITRACE 1
 //#define CONFIG_ITRACE_COND "true"
#define CONFIG_MAX_BUF_SIZE 16
#define CONFIG_MAX_INST_LEN 128
#define CONFIG_LOG_START 0
#define CONFIG_LOG_END 10000

 //#define CONFIG_FTRACE 1
 //#define CONFIG_FTRACE_COND "true"


#endif
