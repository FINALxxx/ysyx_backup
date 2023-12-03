CFILE = .cpp
HFILE = .h
VFILE = .v
WAVEFILE = wave.vcd

BINSRC ?=

CSRC = $(wildcard *${CFILE})
CSRC += $(wildcard include/*${CFILE})

VSRC = $(wildcard *${VFILE})
VTOP = cpu
TGS = V${VTOP}

all:
	@echo ${CSRCt}
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall --cc --exe -top-module ${VTOP} --build ${CSRC} ${VSRC} --trace -CFLAGS "-I include"
	make -C obj_dir -f ${TGS}.mk ${TGS}
	./obj_dir/${TGS} ${BINSRC}
	#gtkwave ./${WAVEFILE}

include ../Makefile
