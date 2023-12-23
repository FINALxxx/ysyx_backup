#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

//参见：am/src/native/ioe/input.c
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
	uint32_t k = AM_KEY_NONE;
	k = inl(KBD_ADDR);	
	kbd->keydown = (k & KEYDOWN_MASK ? true : false);
	kbd->keycode = k & ~KEYDOWN_MASK;
}
