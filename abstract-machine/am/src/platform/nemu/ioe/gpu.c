#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
	
	/* CODE FOR TEST GPU
	int i;
	int w = inw(VGACTL_ADDR);
	int h = inw(VGACTL_ADDR + 2);
	uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
	for (i = 0; i < w * h; i ++) fb[i] = i;*/
	outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = inw(VGACTL_ADDR), .height = inw(VGACTL_ADDR+2),
    .vmemsz = 0
  };
}

//绘制画面
//参见 am/src/native/ioe/gpu.c
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
	int x = ctl->x, y = ctl->y;
	int w = ctl->w, h = ctl->h;
	if(!ctl->sync || w == 0 || h == 0) return;
	
	uint32_t* fb_ptr = (uint32_t*)(uintptr_t)FB_ADDR;
	uint32_t sw = inw(VGACTL_ADDR+2);//界面宽度
	uint32_t* pixel_ptr = ctl->pixels;
	for(int i=0;i<w;++i) //w列
		for(int j=0;j<h;++j) //h行
			fb_ptr[(i+x)*sw+(j+y)] = pixel_ptr[i*w+j]; 

	if (ctl->sync) {
		outl(SYNC_ADDR, 1);//向内存SYNC_ADDR写入一个整字数据1
	}
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
