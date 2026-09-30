/*
 * software_timer.h
 *
 *  Created on: Sep 29, 2026
 *      Author: Hung Anh
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_
extern volatile int timer4_flag;

extern volatile int timer1_flag;
extern volatile int timer2_flag;
extern volatile int timer3_flag;
// Khai báo các hàm điều khiển timer
void setTimer1(int duration);
void clearTimer1();

void setTimer2(int duration);
void clearTimer2();
void setTimer3(int duration);
// Hàm xử lý đếm thời gian (chạy trong ngắt)
void setTimer4(int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
