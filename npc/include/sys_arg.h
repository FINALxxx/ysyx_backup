#ifndef __SYS_ARG_H__
#define __SYS_ARG_H__

vluint64_t sim_time=0;
FILE* fp =NULL;
uint32_t cmd_cur=0,cmd_num=0;
uint32_t* cmd=NULL;

VerilatedContext* env = NULL;
Vcpu* cpu = NULL;


//cpu运行参量
enum STATUS {DEAD,ALIVE};
STATUS cpu_status=ALIVE;

#endif
