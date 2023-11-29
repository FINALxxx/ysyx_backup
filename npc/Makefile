CFILE=.cpp
VFILE=.v
WAVEFILE=wave.vcd
CTOP=csrc/main.cpp
VTOP=cpu
TGS=V$(patsubst %.v,%,${VTOP})
VSRC=$(wildcard vsrc/*${VFILE})
INCLUDE=vsrc ${VSRC}

all:
	@echo ${TGS} 
	@echo ${CTOP}
	@echo ${VTOP}
	@echo ${VSRC}
	@echo ${INCLUDE}

	
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator  -Wall --cc --exe --build --trace \
	-y ${INCLUDE} \
	-top-module ${VTOP} \
	${CTOP}
	
	make -C obj_dir -f ${TGS}.mk ${TGS} 
	obj_dir/${TGS}
	#gtkwave ./${WAVEFILE}

include ../Makefile
