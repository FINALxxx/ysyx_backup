#include <am.h>
#include <nemu.h>

void __am_timer_init() {
	outl(RTC_ADDR,0);//low 4 bytes
	outl(RTC_ADDR+4,0);//high 4 bytes
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
	//us为uint64_t
	uptime->us = inl(RTC_ADDR);
	uptime->us <<= 32;
	uptime->us += inl(RTC_ADDR+4);
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
