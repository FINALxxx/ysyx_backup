#ifndef __SYS_FUNC_H__
#define __SYS_FUNC_H__

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

	/* 波形调试
	env->traceEverOn(true);
	VerilatedVcdC* m_trace = new VerilatedVcdC; 
	cpu->trace(m_trace,5);
	m_trace->open("wave.vcd");
	*/
} 

void sim_stop(){
	switch(cpu_status){
		
		case DEAD: 
			printf("\nNPC EXIT: \033[0m\033[1;32mHIT GOOD TRAP\033[0m at pc = %#010x\n\n",cpu->pc);
		break;

		case ALIVE:
			printf("\nNPC EXIT: \033[0m\033[1;31mHIT BAD TRAP\033[0m at pc = %#010x\n\n",cpu->pc);
		break;

		default ://ABORT or unexpected situation
			printf("\nNPC EXIT: \033[0m\033[1;31mABORT\033[0m at pc = %#010x\n\n",cpu->pc);
		break;
		
	}

	//m_trace->close();
	cpu->final();
	delete cpu;
}

void sim_update(){
	//cpu->eval();//在某些情况下，可能会导致一个循环eval多次，这个时候请把这一句删掉
	sim_time++;
}

extern "C" void halt(svBit is_dead){
	if(is_dead && cmd_cur > cmd_num){ 
		cpu_status=DEAD;
		return;
	}else{
		cpu_status=ABORT;
		return;
	}
}

void exec_once(){

	/* START 1clk in total */
	cpu->eval(); 
	cpu->clk^=1;//0.5clk
	cpu->eval();
	cpu->clk^=1;//0.5clk
	/* END */


	//cout<<"PC="<<cpu->pc<<endl;
	cmd_cur = (cpu->pc-0x80000000)/4;//虚拟地址转实际地址
	printf("[CUR=%d]\n",cmd_cur);
	cpu->cmd=cmd[cmd_cur];
	printf("[CMD=%#010x]\n",cpu->cmd);
}

#endif
