#ifndef __OLED_H
#define __OLED_H

#include "main.h"
#define OLED_MODE 0
#define SIZE 8
#define XLevelL		0x00
#define XLevelH		0x10
#define Max_Column	128
#define Max_Row		64
#define	Brightness	0xFF
#define X_WIDTH 	128
#define Y_WIDTH 	64

#define u8 unsigned char
#define u32 unsigned int
//-----------------OLED IIC端口定义----------------

#define OLED_SCLK_Clr() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, GPIO_PIN_RESET) //SCL
#define OLED_SCLK_Set() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, GPIO_PIN_SET)

#define OLED_SDIN_Clr() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET) //SDA
#define OLED_SDIN_Set() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET)


#define OLED_CMD  0	//写命令
#define OLED_DATA 1	//写数据


//OLED控制用函数
void OLED_WR_Byte(unsigned dat,unsigned cmd);
void OLED_Display_On(void);
void OLED_Display_Off(void);
void OLED_Init(void);
void OLED_Clear(void);
void OLED_DrawPoint(u8 x,u8 y,u8 t);
void OLED_Fill(u8 x1,u8 y1,u8 x2,u8 y2,u8 dot);
void OLED_ShowChar(u8 x,u8 y,u8 chr,u8 Char_Size);
void OLED_ShowNum(u8 x,u8 y,u32 num,u8 len,u8 size);
void OLED_ShowString(u8 x,u8 y, u8 *p,u8 Char_Size);
void OLED_Set_Pos(unsigned char x, unsigned char y);

void OLED_DrawBMP(unsigned char x0, unsigned char y0,unsigned char x1, unsigned char y1,unsigned char BMP[]);
void Delay_50ms(unsigned int Del_50ms);
void Delay_1ms(unsigned int Del_1ms);
void fill_picture(unsigned char fill_Data);
void Picture();
void IIC_Start();
void IIC_Stop();
void Write_IIC_Command(unsigned char IIC_Command);
void Write_IIC_Data(unsigned char IIC_Data);
void Write_IIC_Byte(unsigned char IIC_Byte);

void IIC_Wait_Ack();

// 快速绘制图像
void OLED_DrawBMP_Fast(unsigned char BMP[]);
// 绘制太空人
void OLED_DrawSpaceman_v2();
// 绘制一个数字
void OLED_ShowCustomNum(unsigned char pos_x, unsigned char pos_y,unsigned char n, unsigned char size);
// 绘制冒号
void OLED_ShowColon(unsigned char pos_x, unsigned char pos_y);
// 显示时间
void OLED_ShowTime(unsigned char hour, unsigned char minite, unsigned char second);
// 绘制温度图标
void OLED_ShowTempLogo(unsigned char pos_x, unsigned char pos_y);
// 绘制湿度图标
void OLED_ShowHumidityLogo(unsigned char pos_x, unsigned char pos_y);
// 绘制2个数字
void OLED_ShowCustomNum2(unsigned char pos_x, unsigned char pos_y, unsigned char n);
// 绘制摄氏度
void OLED_ShowDegreeLogo(unsigned char pos_x, unsigned char pos_y);
#endif




