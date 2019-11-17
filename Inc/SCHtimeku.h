/*
 * SCHtimeku.h
 *
 *  Created on: Nov 10, 2019
 *      Author: izzat
 */

#ifndef INC_SCHTIMEKU_H_
#define INC_SCHTIMEKU_H_

void TIM4_IRQHandler(void);
void SCH_Init(void);

uint16_t milisec;
uint8_t sec;
uint8_t min;

uint32_t time_milisec;
uint32_t time_sec;
uint32_t time_minute;

uint64_t counter_stop;


#endif /* INC_SCHTIMEKU_H_ */
