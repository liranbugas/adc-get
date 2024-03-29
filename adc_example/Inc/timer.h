/*
 * timer.h
 *
 *  Created on: Mar 28, 2024
 *      Author: liran
 */

#ifndef TIMER_H_
#define TIMER_H_

#include <stdint.h>
#include <stdbool.h>
void timer_ini();
void timer_start();
bool timer_check();
void timer_stop();

#endif /* TIMER_H_ */
