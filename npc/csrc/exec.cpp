#include <cpu/exec.h>
#include <cpu/status.h>
#include <cpu/data.h>
#include <bits/stdc++.h>
#include <sys_npc.h>

//基础设施相关
static void trace_and_difftest(){
	/*
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
    }*/
}



void exec_once(){
	clk_update();	
	inst_exec_cnt++;	
	
	std::cout<<"PC="<<pc_getter(TARGET_PC)<<std::endl;
	printf("\t[CMD_HEX=%#010x]\n",inst_getter());
	
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


