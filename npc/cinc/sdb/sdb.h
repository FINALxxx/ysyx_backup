#ifndef __SDB_H__
#define __SDB_H__

#include <readline/readline.h>
#include <readline/history.h>


#define NR_CMD ARRLEN(cmd_table)

void sdb_init();
void sdb_set_batch_mode(); 
void sdb_mainloop();

#endif
