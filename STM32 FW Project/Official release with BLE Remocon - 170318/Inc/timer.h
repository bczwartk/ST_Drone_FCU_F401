#ifndef TIMER_H
#define TIMER_H

#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"

typedef volatile struct tUserTimerStruct
{
    uint32_t    target_tick;
    uint32_t    interval;
    uint32_t    flag;
    uint32_t    flag2;
    uint32_t    event_cnt;
} tUserTimer;

extern tUserTimer tim;

void SetupTimer(tUserTimer *t, uint32_t interval);
void StartTimer(tUserTimer *t);
void StopTimer(tUserTimer *t);
void ClearTimer(tUserTimer *t);
uint32_t isTimerEventExist(const tUserTimer *t);

void User_Timer_Callback(void);

#endif /* TIMER_H */
