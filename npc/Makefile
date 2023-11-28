CFILE=.cpp
VFILE=.v
WAVEFILE=wave.vcd
CSRC=$(wildcard csrc/*${CFILE})
VSRC=vsrc/cpu.v
TGS=V$(patsubst %.v,%,$(notdir ${VSRC}))

all:
	@echo ${TGS} 
	@echo ${CSRC}
	@echo ${VSRC}

	
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall --cc --exe --build ${CSRC} ${VSRC} --trace -I vsrc
	make -C obj_dir -f ${TGS}.mk ${TGS}
	./obj_dir/${TGS}
	#gtkwave ./${WAVEFILE}

include ../Makefile
