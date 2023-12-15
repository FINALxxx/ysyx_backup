#include <common.h>

#include <sdb/sdb.h>

enum{STD,SDB} mode;
extern mode launch_mode;
void engine_launch(int argc,char** argv);
int is_exit_status_bad();

int main(int argc,char** argv){
	engine_launch(argc,argv);
	return is_exit_status_bad();
}
