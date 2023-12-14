#include <isa.h>
#include <common.h>

void welcome(){
	printf("welcome to %s-NPC\n",ANSI_FMT(CONFIG_ISA,ANSI_FG_YELLOW ANSI_BG_RED));

}
