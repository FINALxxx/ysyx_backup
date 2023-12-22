#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
	//panic("Not implemented");
	size_t cnt = 0;
	while(s[cnt]!='\0') cnt++;
	return cnt;
}

//WARN:dst与src有重叠部分时会UB，应使用memmove
//WARN:dst无法容纳src时会UB
char *strcpy(char *dst, const char *src) {
	assert(dst!=NULL&&src!=NULL);
	char* backup = dst;
    while((*dst++ = *src ++) != '\0');
    return backup;
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
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
  assert(dst!=NULL&&src!=NULL);
  char* d = dst;
  const char* s = src;

  if(d==s) return d;

  if(d+n<=s || s+n<=d) return memcpy(d,s,n);

  //出现重叠
  if(d<s){//重叠左边
	for(size_t i=0;i<n;++i) d[i] = s[i];
  }else{//重叠右边
	for(size_t i=n;i>0;--i) d[i-1] = s[i-1];
  }
  return d;
}

void *memcpy(void *out, const void *in, size_t n) {
  assert(out!=NULL&&in!=NULL);
  char* d = out;
  const char* s = in;

  for(size_t i=0;i<n;++i) d[i] = s[i];

  return out;
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
