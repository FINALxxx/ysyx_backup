#include<bits/stdc++.h>
#include<readline/readline.h>
#include<readline/history.h>

static char* getstr(){
	static char* input_line = NULL;
	if(input_line){//pointer initialize
		free(input_line);
		input_line = NULL;
	}
	
	//Warn: readline是一个动态库，编译的时候需要加上　-lreadline
	input_line = readline("(npc) ");
	
	if(input_line && *input_line){
		add_history(input_line);
	} 

	return input_line;
}


