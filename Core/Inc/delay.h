/*
 * delay.h
 *
 *  Created on: 2022年7月6日
 *      Author: hejunlin
 */

#ifndef INC_DELAY_H_
#define INC_DELAY_H_

#include "stm32f1xx_hal.h"

#define CPU_FREQUENCY_MHZ    72		// STM32时钟主频
void delay_us(__IO uint32_t delay)
{
    int last, curr, val;
    int temp;

    while (delay != 0)
    {
        temp = delay > 900 ? 900 : delay;
        last = SysTick->VAL;
        curr = last - CPU_FREQUENCY_MHZ * temp;
        if (curr >= 0)
        {
            do
            {
                val = SysTick->VAL;
            }
            while ((val < last) && (val >= curr));
        }
        else
        {
            curr += CPU_FREQUENCY_MHZ * 1000;
            do
            {
                val = SysTick->VAL;
            }
            while ((val <= last) || (val > curr));
        }
        delay -= temp;
    }
}


#endif /* INC_DELAY_H_ */
