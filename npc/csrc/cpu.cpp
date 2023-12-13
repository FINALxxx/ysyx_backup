#include <cpu.h>

/* DATA */
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
	//reg_setter(n);
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

uword_t pc_getter(bool target){
	pc_setter();
	if(target == TARGET_PC) return cpu_data.pc;
	else return cpu_data.dnpc;
}


uword_t reg_getter(byte_t n){
	//reg_setter(n);
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

uword_t pc_getter(bool target){
	pc_setter();
	if(target == TARGET_PC) return cpu_data.pc;
	else return cpu_data.dnpc;
}


void pc_setter(){//之后换成DPIC
	cpu_data.pc = cpu->pc;
	cpu_data.dnpc = cpu->dnpc;
}





/* EXEC */

//基础设施相关
/*static void trace_and_difftest(){
	//ITRACE
	buffer_insert(cpu->pc);

	//FTRACE
	elf_call(cpu->pc,cpu->dnpc, cmd[pc_VtransP(cpu->pc)/4] );

	//断点调试
	uint32_t new_result=0;
	WP* wp=check_wp(&new_result);
	if(wp!=NULL){
		cpu_status.state=STOP;
		printf("Watchpoint change:In No.%d,[%s],(%d==>%d)\n",wp->NO,wp->expr_s,wp->val,new_result);
		wp->val=new_result;
    }
}*/

void exec_once(){
	clk_update();	
	inst_exec_cnt++;	
	vaddr_t pc = pc_getter(TARGET_PC);
	std::cout<<"PC="<<pc<<std::endl;
	printf("\t[CMD_HEX=%#010x]\n",inst_fetch(pc,4));
	
}

void exec(uint32_t n){
	
	switch(cpu_status.state){
		case DEAD:case ABORT:
			printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
		return;

		default://STOP、ALIVE
			cpu_status.state=ALIVE;
		break;
	}


	//printf("\n\t\033[0m\033[1;31m[FTRACE RUNNING]\033[0m\n");
	for(;n>0;--n){
		exec_once();
		//trace_and_difftest();
		if(cpu_status.state!=ALIVE) break;
	}
	//printf("\t\033[0m\033[1;31m[FTRACE TERMINATE]\033[0m\n");


	switch(cpu_status.state){
		case ALIVE:
			cpu_status.state = STOP;
		break;

		case DEAD: case ABORT:
			//buffer_disp();
			if(cpu_status.halt_pc == 0){//运行结束
				//TODO:输出调试信息
			}
			sim_terminate();
			
		case QUIT://DEAD、ABORT时也成立
			//TODO:输出统计信息
		break;
	}

}


/* STATUS */
void status_setter(int state, uint32_t pc, int halt_ret) {
  cpu_status.state = state;
  cpu_status.halt_pc = pc;
  cpu_status.halt_ret = halt_ret;
}

