CFILE=.cpp
VFILE=.v
WAVEFILE=wave.vcd
CSRC=$(wildcard *${CFILE})
VSRC=$(wildcard *${VFILE})
TGS=V$(patsubst %.v,%,${VSRC})

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall --cc --exe --build ${CSRC} ${VSRC} --trace
	make -C obj_dir -f ${TGS}.mk ${TGS}
	./obj_dir/${TGS}
	#gtkwave ./${WAVEFILE}
include ../Makefile
