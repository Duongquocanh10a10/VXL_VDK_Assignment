#include "software_timer.h"

#define TICK 1 // Nhịp ngắt hệ thống giờ là 1ms

volatile int timer1_flag = 0;
int timer1_counter = 0;

volatile int timer2_flag = 0;
int timer2_counter = 0;

volatile int timer3_flag = 0;
int timer3_counter = 0;

volatile int timer4_flag = 0;
int timer4_counter = 0;
void setTimer1(int duration) {
    timer1_counter = duration / TICK;
    timer1_flag = 0;
}
void setTimer2(int duration) {
    timer2_counter = duration / TICK;
    timer2_flag = 0;
}

void setTimer3(int duration) {
    timer3_counter = duration / TICK;
    timer3_flag = 0;
}
void setTimer4(int duration) {
    timer4_counter = duration / TICK;
    timer4_flag = 0;
}
void timerRun() {
    if (timer1_counter > 0) {
        timer1_counter--;
        if (timer1_counter <= 0) {
            timer1_flag = 1;
        }
    }
    if (timer2_counter > 0) {
        timer2_counter--;
        if (timer2_counter <= 0) {
            timer2_flag = 1;
        }
    }
    if (timer3_counter > 0) {
        timer3_counter--;
        if (timer3_counter <= 0) {
            timer3_flag = 1;
        }
    }
    if (timer4_counter > 0) {
        timer4_counter--;
        if (timer4_counter <= 0) {
            timer4_flag = 1;
        }
    }
}
