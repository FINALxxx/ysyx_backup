CFILE=.cpp
VFILE=.v
WAVEFILE=wave.vcd
CSRC=$(wildcard csrc/*${CFILE})
VTOP=vsrc/cpu.v
TGS=V$(patsubst %.v,%,$(notdir ${VTOP}))
VSRC=$(wildcard vsrc/*${VFILE})


all:
	@echo ${TGS} 
	@echo ${CSRC}
	@echo ${VSRC}

	
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall --cc --exe --build ${CSRC} --top-module ${VTOP} --trace -I ${VSRC} 
	make -C obj_dir -f ${TGS}.mk ${TGS}
	./obj_dir/${TGS}
	#gtkwave ./${WAVEFILE}

include ../Makefile
