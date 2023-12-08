#include "stdint.h"

extern "C" void disasm_init(const char* triple);

extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);


