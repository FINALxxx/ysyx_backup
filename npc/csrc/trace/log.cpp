#include <common.h>

extern uint64_t inst_cnt;
FILE* log_fp = NULL;

void log_init(const char* log_file){
	printf("%s:%s\n",ANSI_FMT("READING",ANSI_FG_GREEN),log_file);
	log_fp = stdout;
	if (log_file != NULL) {
		FILE *fp = fopen(log_file, "w");
		Assert(fp, "<FILE> Can not open '%s'", log_file);
		log_fp = fp;
	}
	Log("Log is written to %s", log_file ? log_file : "stdout");
}

bool log_enable() {
  return (inst_cnt >= CONFIG_LOG_START) && (inst_cnt <= CONFIG_LOG_END);
}

