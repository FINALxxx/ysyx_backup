CFILE=.cpp
VFILE=.v
WAVEFILE=wave.vcd
CSRC=$(wildcard *${CFILE})
VSRC=$(wildcard *${VFILE})

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall --cc --exe --build ${CSRC} ${VSRC} --trace

include ../Makefile
