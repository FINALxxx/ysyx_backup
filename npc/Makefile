CFILE=.cpp
VFILE=.v
WAVEFILE=wave.vcd

VSRC=$(wildcard vsrc/*${VFILE})
VTOP=cpu

CTOP=csrc/main.cpp
INCLUDE=vsrc ${VSRC} image
TGS=V$(patsubst %.v,%,${VTOP})
BINSRC=$(wildcard image/*.bin)


all:
	@echo ${TGS} 
	@echo ${CTOP}
	@echo ${VTOP}
	@echo ${VSRC}
	@echo ${INCLUDE}

	
sim:
	@$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator  -Wall --cc --exe --build --trace \
	-y ${INCLUDE} \
	-top-module ${VTOP} \
	${CTOP} \
	-F ${BINSRC}
	
	#make -C obj_dir -f ${TGS}.mk ${TGS} 
	#obj_dir/${TGS}
	#gtkwave ./${WAVEFILE}

include ../Makefile
