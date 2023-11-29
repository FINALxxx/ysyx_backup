CFILE=.cpp
VFILE=.v
WAVEFILE=wave.vcd
CTOP=csrc/main.cpp
VTOP=cpu
TGS=V$(patsubst %.v,%,${VTOP})
VSRC=$(wildcard vsrc/*${VFILE})
INCLUDE=include/*.v

all:
	@echo ${TGS} 
	@echo ${CTOP}
	@echo ${VTOP}
	@echo ${VSRC}

	
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator --Mdir obj_dir -Wall --cc --exe --build --trace \
	-I${INCLUDE}
	-top-module ${VTOP} \
	${CTOP} ${VSRC}
	
	make -C ../obj_dir -f ${TGS}.mk ${TGS} 
	../obj_dir/${TGS}
	#gtkwave ./${WAVEFILE}

include ../Makefile
