#ifndef _DS1302_H
#define _DS1302_H

#include "stm32f1xx_hal.h"
#define u8 unsigned char
#define u32 unsigned int


#define RST_HIGH      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET)
#define RST_LOW       HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_RESET)

#define CLK_HIGH      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_SET)
#define CLK_LOW       HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_RESET)

#define DAT_HIGH      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_SET)
#define DAT_LOW       HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_RESET)

#define DAT           HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_2)

void DS1302_Init(void);
void DS1302_ReadReg(u8 addr, u8 *value);
void DS1302_GetYear(u8 *year);
void DS1302_GetMonth(u8 *month);
void DS1302_GetDate(u8 *date);
void DS1302_GetHour(u8 *hour);
void DS1302_GetMinite(u8 *minute);
void DS1302_GetSecond(u8 *second);
void DS1302_SetTime(u8 yr, u8 mon, u8 date, u8 hr, u8 min, u8 sec);

#endif
