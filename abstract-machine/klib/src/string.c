#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
	//可以加个断言
	char* backup = dst;
    while((*dst++ = *src ++) != '\0');
    return backup;
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
	printf("TEST\n");
	char* dst_ptr = dst;
	while(*dst_ptr != '\0') dst_ptr++;
	while((*dst_ptr = *src) != '\0') dst_ptr++,src++;
	return dst;
}

int strcmp(const char *s1, const char *s2) {
	//*s1==*s2最先短路的概率大，放在前面可以加快短路速度
	while(*s1==*s2 && *s1!='\0' && *s2!='\0') s1++,s2++;
	return *s1 - *s2;
	//return 1;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  char* s_ptr=(char*)s;//转个类型，使得以char为单位写入内存
  while(n-- > 0) *s_ptr++=c;
  return s; 
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
	const char* s1_ptr=(char*)s1;
	const char* s2_ptr=(char*)s2;
	while(*s1_ptr == *s2_ptr && --n){
		s1_ptr++,s2_ptr++;
	}
	return *s1_ptr - *s2_ptr;
}

#endif
