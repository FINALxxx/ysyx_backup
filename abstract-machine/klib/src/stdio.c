#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
	//panic("Not implemented");
	va_list args;
	//感觉printf内部不会调用vsprintf，因为这样会需要定义一个额外的buffer，而不是直接用可变参数
	char out[25536];//没实现malloc之前别用
	va_start(args,fmt);
	int cnt = vsprintf(out,fmt,args); 
	va_end(args);
	
	char* out_ptr=out;
	while(*out_ptr!='\0') putch(*out_ptr),out_ptr++;

	return cnt;	
}


void zero_expand(int num,char* str){
	char expand[num+5];
	memset(expand,'0',num);
	strcat(str,expand);
	while(*str!='\0') str++;//追上strcat的部分
}

int record_num(int* width,const char* fmt){
	int tmp = 0, cnt = 0;
	while(*(fmt+1) >= '1' && *(fmt+1) <= '9'){
		tmp *= 10;
		tmp += *(fmt+1) - '0';
		fmt++,cnt++;
	}
	*width = tmp;
	return cnt;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
	//panic("Not implemented");
	int cnt=0;
	char* out_ptr = out;

	while(*fmt!='\0'){
		int int_val=0,int_cnt=0;
		char int_reg[12]={'\0'};
		int width = 0;//填充位数
		char USE_ZERO_EXPAND = 0;
        switch(*fmt){
            case '%':
              	fmt++;
                switch(*fmt){
					case 'd':
						int_val = (int)va_arg(ap,int);
						if(int_val<0) *out_ptr='-',out_ptr++,int_val=-int_val;
						if(int_val==0) int_reg[0]=0,int_cnt++;
						for(;int_val;int_cnt++){
							int_reg[int_cnt]=int_val%10;
							int_val/=10;
						}
						
						if(int_cnt < width && USE_ZERO_EXPAND){
							cnt += (width - int_cnt);
							zero_expand((width-int_cnt), out_ptr);
						}
						
						cnt+=int_cnt;
						for(int i=int_cnt-1;i>=0;i--){
							*out_ptr = '0'+int_reg[i];
							out_ptr++; 
						}

						USE_ZERO_EXPAND = 0,width = 0;//复位参数
					break;

                	case 'c':
						*out_ptr = (char)va_arg(ap,int);
						out_ptr++,cnt++;
					break;
					
                    case 's':
						strcat(out_ptr,(char*)va_arg(ap,char*));
						while(*out_ptr!='\0') out_ptr++,cnt++;//追上strcat的部分
					break;

					case '0'://左填充0
						USE_ZERO_EXPAND = 1;
						fmt += record_num(&width,fmt);
					break;
					
				/* TODO
					case ' ':

					break;
						
					case '-'://右对齐

					break;

					case '+'://(默认)左对齐

					break;
												*/
					default://ERROR
            			*out = ' ';
            			out_ptr++,cnt++;
						assert(0);
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
    *out_ptr='\0';
	return cnt;
}

int sprintf(char *out, const char *fmt, ...) {
	//while(*out_ptr!='\0') out_ptr++;
	va_list args;
	va_start(args,fmt);
	int cnt = vsprintf(out,fmt,args); 
	va_end(args);
	return cnt;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif

