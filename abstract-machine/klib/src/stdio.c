#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
	int cnt=0;
	char* out_ptr = out;
	while(*out_ptr!='\0') out_ptr++;
	
    va_list args=NULL;
    va_start(args,fmt);
    while(*fmt!='\0'){
        switch(*fmt){
            case '%':
              	fmt++;
                switch(*fmt){
                	case 'c':
						*out_ptr = (char)va_arg(args,int);
						out_ptr++,cnt++;
					break;
					
                    case 's':
                    	strcat(out_ptr,va_arg(args,char*));
                    	while(*out_ptr!='\0') out_ptr++,cnt++;
					break;
					
					default://ERROR
            			*out = ' ';
            			out_ptr++,cnt++;
					break;
                }
            break;
              
            default:
            	*out_ptr = *fmt;
            	out_ptr++,cnt++;
			break;
        }
        fmt++; 
    }
    va_end(args);
    *out_ptr='\0';
    return cnt;

}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif

