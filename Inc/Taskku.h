/*
 * Taskku.h
 *
 *  Created on: Nov 10, 2019
 *      Author: izzat
 */

#ifndef INC_TASKKU_H_
#define INC_TASKKU_H_

#include "HardwareInitku.h"
#include "string.h"
#include "stdio.h"

void Task_Init(void);
void Task_Run_Main(void);
void Task_Run_Stopwatch(void);
void Task_Error_Handler(_Bool, char *);
void Task_Refresh(void);
void Task_Display(_Bool);
void Task_Calibrate(_Bool);
void Count_Sens_One(_Bool, uint64_t);
void Count_Sens_Two(_Bool, uint64_t);
void Count_Sens_Three(_Bool, uint64_t);
//void Task_ElapseTime(_Bool, uint64_t, uint64_t);


#endif /* INC_TASKKU_H_ */
