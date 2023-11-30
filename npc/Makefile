CFILE = .cpp
VFILE = .v
WAVEFILE = wave.vcd

VSRC = $(wildcard vsrc/*${VFILE})
VTOP = cpu

BINSRC ?=
CTOP = $(wildcard csrc/*${CFILE})
INCLUDE = vsrc ${VSRC}
TGS = V$(patsubst %.v,%,${VTOP})

#CFLAGS = -I csrc/include

all:
	@echo ${TGS} 
	@echo ${CTOP}
	@echo ${VTOP}
	@echo ${VSRC}
	@echo ${INCLUDE}
	@echo ${BINSRC}

	
sim:
	@$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator  -Wall --cc --exe --build --trace \
	-y ${INCLUDE} \
	-top-module ${VTOP} \
	-CFLAGS "-I./csrc/include" \
	${CTOP}
	
	make -C obj_dir -f ${TGS}.mk ${TGS} 
	obj_dir/${TGS} ${BINSRC}
	#gtkwave ./${WAVEFILE}

include ../Makefile
