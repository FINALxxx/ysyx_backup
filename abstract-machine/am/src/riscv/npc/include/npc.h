#ifndef __NPC_H__
	#define __NPC_H_
	
	//ebreak
	# define npc_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))
#endif
