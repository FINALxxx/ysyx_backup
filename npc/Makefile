CFILE=.cpp
VFILE=.v
WAVEFILE=wave.vcd
CSRC=$(wildcard *${CFILE})
VSRC=$(wildcard *${VFILE})
VTOP=cpu
TGS=V${VTOP}

all:
	
sim:
	#$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall --cc --exe -top-module ${VTOP} --build ${CSRC} ${VSRC} --trace
	make -C obj_dir -f ${TGS}.mk ${TGS}
	./obj_dir/${TGS}
	#gtkwave ./${WAVEFILE}

include ../Makefile
