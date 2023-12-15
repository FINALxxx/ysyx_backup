#include <common.h>

#include <sdb/sdb.h>

enum{STD,SDB} mode;
extern mode launch_mode;
void engine_launch();
int is_exit_status_bad();

int main(int argc,char** argv){
	engine_launch();
	return is_exit_status_bad();
}
