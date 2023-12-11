#include <cpu/data.h>
#include <memory/config.h>
#include <sys/sys_npc.h>
#include "Vcpu___024root.h"


const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

//懒更新：需要get时才set
static VlUnpacked<IData,32> rf_struct = cpu->rootp->cpu__DOT__rf1__DOT__rf;
void reg_setter(byte_t n){
	//printf("LOG_REG:%d\n",n);
	//for(int i=0;i<REG_NUM;i++) cpu_data.gpr[i] = rf_struct.m_storage[i];
	cpu_data.gpr[n] = rf_struct.m_storage[n];
}

uword_t reg_getter(byte_t n){
	reg_setter(n);
	if(n<REG_NUM) return cpu_data.gpr[n];
}

void reg_display() {
	for(int i=0;i<REG_NUM;i ++){
		printf("%s\t%#010x\t%d\n",regs[i],reg_getter(i),reg_getter(i));
	}
}

uint32_t reg_str2val(const char *s, bool *success) {
	for(int i=0;i<REG_NUM;i++){
		if(!strcmp(regs[i],s)){ 
			*success=true;
			return reg_getter(i);
		}
	}
	*success=false;
	return 0;
}

inline uword_t pc_getter(bool target){
	pc_setter();
	if(target == TARGET_PC) return cpu_data.pc;
	else return cpu_data.dnpc;
}


inline void pc_setter(){//之后换成DPIC
	cpu_data.pc = cpu->pc;
	cpu_data.dnpc = cpu->dnpc;
}


inline uword_t inst_getter(){	
	inst_setter(pc_getter(TARGET_PC));
	return cpu_data.inst;
}

inline void inst_setter(uword_t pc){//相当于vaddr_ifetch
	cpu_data.inst = vaddr_read(pc,4);
}

