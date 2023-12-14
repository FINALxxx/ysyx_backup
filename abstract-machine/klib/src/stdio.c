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
	//while(*out_ptr!='\0') out_ptr++;
	
    va_list args=NULL;
    va_start(args,fmt);
    while(*fmt!='\0'){
		int int_val=0,int_cnt=0;
		char int_reg[12]={'\0'};
        switch(*fmt){
            case '%':
              	fmt++;
                switch(*fmt){
					case 'd':
						int_val = (int)va_arg(args,int);
						if(int_val<0) *out_ptr='-',out_ptr++,int_val=-int_val;
						for(;int_val;int_cnt++){
							int_reg[int_cnt]=int_val%10;
							int_val/=10;
						}
						cnt+=int_cnt;
						for(int i=int_cnt-1;i>=0;i--){
							*out_ptr = '0'+int_reg[i];
							out_ptr++; 
						}
					break;

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
	return 0;

}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif

