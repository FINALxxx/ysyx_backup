//将正常启动的init()、exec()、sdb模式启动的moniter_init()、sdb_mainloop()都放在这儿调用

enum{STD,SDB} mode;

mode launch_mode = STD;

void std_monitor_init(int argc,char** argv);
void exec(uint64_t n);
void sdb_monitor_init(int argc,char** argv);
void sdb_mainloop();
void engine_launch(int argc,char** argv){
	if(launch_mode == STD){
		std_monitor_init(argc,argv);
		exec(-1);	
	}else{//SDB
		sdb_monitor_init(argc,argv);
		sdb_mainloop();	
	}
}
