/*
 * Software_timer.h
 *
 *  Created on: Sep 21, 2024
 *      Author: win
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;
void setTimer1(int duration);
void timerRun();
void update7SEG(int index);
void setTimer2(int duration);
void display7SEG(int num);
#endif /* INC_SOFTWARE_TIMER_H_ */
