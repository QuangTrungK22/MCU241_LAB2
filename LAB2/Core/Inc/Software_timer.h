/*
 * Software_timer.h
 *
 *  Created on: Sep 21, 2024
 *      Author: win
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_
extern int timer0_flag;
extern int timer1_flag;
extern int timer2_flag;
extern int hour;
extern int minute;
extern int second;
void setTimer1(int duration);
void timerRun();
void update7SEG(int index);
void setTimer2(int duration);
void display7SEG(int num);
void updateClockBuffer(void);
void setTimer0(int duration);
#endif /* INC_SOFTWARE_TIMER_H_ */
