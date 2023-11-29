CFILE=.cpp
VFILE=.v
WAVEFILE=wave.vcd
CTOP=csrc/main.cpp
VTOP=cpu
TGS=V$(patsubst %.v,%,${VTOP})
VSRC=$(wildcard vsrc/*${VFILE})

all:
	@echo ${TGS} 
	@echo ${CTOP}
	@echo ${VTOP}
	@echo ${VSRC}

	
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator --Mdir obj_dir -Wall --cc ${CTOP} --exe --build ${VSRC}  --trace 
	make -C ../obj_dir -f ${TGS}.mk ${TGS} 
	../obj_dir/${TGS}
	#gtkwave ./${WAVEFILE}

include ../Makefile
