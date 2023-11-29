CFILE=.cpp
VFILE=.v
WAVEFILE=wave.vcd
CTOP=../csrc/main.cpp
VTOP=cpu.v
TGS=V$(patsubst %.v,%,${VTOP})
VSRC=$(wildcard *${VFILE})


all:
	@echo ${TGS} 
	@echo ${CSRC}
	@echo ${VSRC}

	
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall --cc --exe --build ${CTOP} ${VSRC} --trace 
	make -C obj_dir -f ${TGS}.mk ${TGS} --Mdir ../
	./obj_dir/${TGS}
	#gtkwave ./${WAVEFILE}

include ../../Makefile
