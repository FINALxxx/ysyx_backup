#include <bits/stdc++.h>
#include <sys_npc.h>

void cmd_disasm(){
	uint32_t cmd_now = cmd_getter();
	char* disasm_rst=NULL;
	disassemble(disasm_rst,,cpu->pc,4);
}
