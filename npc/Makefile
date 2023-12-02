CFILE = .cpp
VFILE = .v
WAVEFILE = wave.vcd

VSRC = $(wildcard vsrc/*${VFILE})
VTOP = cpu

BINSRC ?=
CSRC = $(wildcard csrc/*${CFILE})
INCLUDE = vsrc ${VSRC} . 
TGS = V$(patsubst %.v,%,${VTOP})


#CFLAGS = -I ${NPC_HOME}/csrc/include

all:
	@echo ${TGS} 
	@echo ${CSRC}
	@echo ${VTOP}
	@echo ${VSRC}
	@echo ${INCLUDE}
	@echo ${BINSRC}

	
sim:
	@$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo verilator -Wall --cc --Mdir ${NPC_HOME}/obj_dir \
	--exe --build --trace \
	-y ${INCLUDE} $(NPC_HOME)\
	-top-module ${VTOP} \
	${CSRC} 
	
	make -C obj_dir -f ${TGS}.mk ${TGS} 
	obj_dir/${TGS} ${BINSRC}
	#gtkwave ./${WAVEFILE}

include ../Makefile
