VPATH += vsrc
VPATH += csrc

CFILE=.cpp
VFILE=.v
WAVEFILE=wave.vcd
CSRC=$(wildcard *${CFILE})
VSRC=cpu.v
TGS=V$(patsubst %.v,%,${VSRC})

all:
	
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall --cc --exe --build ${CSRC} ${VSRC} --trace
	make -C obj_dir -f ${TGS}.mk ${TGS}
	./obj_dir/${TGS}
	#gtkwave ./${WAVEFILE}

include ../Makefile
