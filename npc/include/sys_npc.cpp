#include "sys_npc.h"
#include "Vcpu___024root.h"
#include "sdb_watchpoint.h"
#include "sdb_itrace.h"

vluint64_t sim_time=0;
FILE* fp =NULL;
uint32_t cmd_cur=0,cmd_num=0;
uint32_t* cmd=NULL;//之后把这个cmd换成mem

VerilatedContext* env = NULL;
Vcpu* cpu = NULL;
NPC_STATUS cpu_status={ .state = STOP };

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

uint8_t reg_len = sizeof(regs)/sizeof(regs[0]);


//基础设施相关
static void trace_and_difftest(){
	//断点调试
	uint32_t new_result=0;
	WP* wp=check_wp(&new_result);
	if(wp!=NULL){
		cpu_status.state=STOP;
		printf("Watchpoint change:In No.%d,[%s],(%d==>%d)\n",wp->NO,wp->expr_s,wp->val,new_result);
		wp->val=new_result;
  }
}




//cpu状态
int is_exit_status_bad() {
  int good = (cpu_status.state == DEAD && cpu_status.halt_ret == 0) || (cpu_status.state == QUIT);
  return !good;
}

void status_setter(int state, uint32_t pc, int halt_ret) {
  cpu_status.state = state;
  cpu_status.halt_pc = pc;
  cpu_status.halt_ret = halt_ret;
}


//模拟器状态
void sim_init(int argc,char** argv){
	env = new VerilatedContext;
	cpu = new Vcpu(env);

	/* START 0clk */	
	cpu->clk=0;
	cpu->rst=1;
	cmd = read_bin(&cmd_num,fp,argv[1]);
	cpu->eval();
	/* END 0clk */	

	/* START 0.5clk */	
	cpu->clk^=1;
	//cpu->rst=0;//debug：严禁在此处复位，此时在下降沿，还没有更改tmp_pc
	cpu->eval();
	/* END 0.5clk */	
	
	/* START 0.5clk */	
	cpu->clk^=1;
	cpu->rst=0;
	cpu->eval();
	printf("[INIT_PC=%#010x]\n\n",cpu->pc);

	/* END 0.5clk */	
	
}


void sim_terminate(){
	if(cpu_status.state == ABORT){//ABORT
		printf("\nNPC EXIT: \033[0m\033[1;31mABORT\033[0m at pc = %#010x\n\n",cpu_status.halt_pc);
	}else if(cpu_status.halt_ret == 0){//GOOD
		printf("\nNPC EXIT: \033[0m\033[1;32mHIT GOOD TRAP\033[0m at pc = %#010x\n\n",cpu_status.halt_pc);
	}else{//BAD or unexpected situation
		printf("\nNPC EXIT: \033[0m\033[1;31mHIT BAD TRAP\033[0m at pc = %#010x\n\n",cpu_status.halt_pc);	
	}

	//m_trace->close();
	cpu->final();
	delete cpu;
}

void sim_update(){//测试用，一般使用exec
	//cpu->eval();//在某些情况下，可能会导致一个循环eval多次，这个时候请把这一句删掉
	sim_time++;
}

static void clk_update(){
	/* START 1clk in total */
	cpu->eval(); 
	cpu->clk^=1;//0.5clk
	cpu->eval();
	cpu->clk^=1;//0.5clk
	/* END */
}

extern "C" void halt(svBit is_halt){//TODO:待修改
	//NPCTRAP(cpu->pc,10号寄存器($a0)的内容);
	if(is_halt) NPCTRAP(cpu->pc,read_register(10));	
	return;
}

//取指
extern "C" svBitVecVal* cmd_getter(svBitVecVal* pc_now){
	return (svBitVecVal*)cmd[pc_VtransP(pc_now[0])/4];
}



//执行
uint8_t pc_VtransP(uint32_t pc){//虚拟转物理地址
	return pc-BASE_Vaddr;
}


void exec_once(){
	buffer_insert(cpu->pc);
	clk_update();	

	//cout<<"PC="<<cpu->pc<<endl;
	cmd_cur = pc_VtransP(cpu->pc)/4;
	printf("\t[CUR=%d]\n",cmd_cur);
	//cpu->cmd=cmd[cmd_cur];
	printf("\t[CMD_HEX=%#010x]\n",cmd[cmd_cur]);
	//printf("\t[CMD_ASM=%#010x]\n",cmd[cmd_cur]);
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

	for(;n>0;--n){
		exec_once();
		trace_and_difftest();
		if(cpu_status.state!=ALIVE) break;
	}

	switch(cpu_status.state){
		case ALIVE:
			cpu_status.state = STOP;
		break;

		case DEAD: case ABORT:
			if(cpu_status.halt_pc == 0){//运行结束
				//TODO:输出调试信息
			}
			sim_terminate();
			
		case QUIT://DEAD、ABORT时也成立
			//TODO:输出统计信息
		break;
	}

}



//内存、寄存器读写
uint32_t read_register(uint8_t n){
	//printf("LOG_REG:%d\n",n);
	VlUnpacked<IData,32> rf_struct = cpu->rootp->cpu__DOT__rf1__DOT__rf;
	if(n<=32) return rf_struct.m_storage[n];
	else return 0;//超过数组大小
}

uint32_t read_memory(uint32_t pc_Vdst,uint8_t size){
	uint8_t pc_Pdst = pc_VtransP(pc_Vdst);
	

	switch(size){
		case 1: return (uint8_t)cmd[pc_Pdst];
		case 2: return (uint16_t)cmd[pc_Pdst];
		default: return (uint32_t)cmd[pc_Pdst];//case 4
	}
}


void reg_display() {
	for(int i=0;i<reg_len;i ++){
		printf("%s\t%#010x\t%d\n",regs[i],read_register(i),read_register(i));
	}
}

uint32_t reg_str2val(const char *s, bool *success) {
	for(int i=0;i<reg_len;i++){
		if(!strcmp(regs[i],s)){ 
			*success=true;
			return read_register(i);
		}
	}
	*success=false;
	return 0;
}



