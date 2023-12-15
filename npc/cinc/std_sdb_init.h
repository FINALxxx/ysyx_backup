#ifndef __STD_SDB_INIT__
#define __STD_SDB_INIT__

//两个init源文件都需要这4个变量
//但是需要将两个源文件的变量进行隔离
static char* bin_file;//img文件
static char* elf_file;//elf文件
static char* log_file;//log文件
static char* diff_file;//diff动态链接库

extern VerilatedContext* env;
extern Vcpu* cpu;
extern long bin_init();
extern void mem_init();
extern void cpu_init();
extern void welcome();

#endif
