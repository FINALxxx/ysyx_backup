#ifndef __SDB_H__
#define __SDB_H__

#include <readline/readline.h>
#include <readline/history.h>

void sdb_init();
void sdb_monitor_init(int argc,char** argv);
void sdb_set_batch_mode(); 
void sdb_mainloop();

#endif
