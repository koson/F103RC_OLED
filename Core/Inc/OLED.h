#ifndef __OLED_H
#define __OLED_H	 
#include "stm32F1xx_hal.h"

#include "stdio.h"
 

#define OLED12846_ADD	0x78  // OLED��I2C��ַ
#define COM		0x00  // OLED ָ��
#define DAT 		0x40  // OLED ����

void WriteCmd(unsigned char I2C_Command);//д����
void WriteDat(unsigned char I2C_Data);//д����
void OLED_Init(void);//��ʼ��
void OLED_SetPos(unsigned char x, unsigned char y);
void OLED_Fill(unsigned char fill_Data);//ȫ�����
void OLED_Clear(void);
void OLED_ON(void);
void OLED_OFF(void);
void OLED_ShowStr(unsigned char x, unsigned char y, unsigned char ch[], unsigned char TextSize);//��ʾ�ַ���
void OLED_ShowCN(unsigned char x, unsigned char y, unsigned char N);//��ʾ����
void OLED_DrawBMP(unsigned char x0,unsigned char y0,unsigned char x1,unsigned char y1,unsigned char BMP[]);//��ʾͼƬ

void OLED_ShowChar(uint8_t x,uint8_t y,uint8_t chr,uint8_t Char_Size);
uint32_t oled_pow(uint8_t m,uint8_t n);
void OLED_ShowNum(uint8_t x,uint8_t y,uint32_t num,uint8_t len,uint8_t size2);//size2(16|12)




#endif



