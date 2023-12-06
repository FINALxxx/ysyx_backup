#ifndef __SDB_WP_H__
#define __SDB_WP_H__

#include "sdb.h"
#include "sdb_watchpoint.h"
#include "sdb_expr.h"

#define NR_WP 32

typedef struct watchpoint {
	int NO;
	struct watchpoint *next;
	/* TODO: Add more members if necessary */
	char expr_s[100];//表达式
	uint32_t val;//值

} WP;


WP* check_wp(uint32_t* new_result);
void new_wp(char* expr_s);
void init_wp_pool();
void free_wp(int NO);
void print_w();

#endif
