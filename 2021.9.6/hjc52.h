/*********************************************************************
 *
 *                          hjc52.h
 *
 *********************************************************************
 * 文件名: hjc52.h
 * 描  述: HL-1/HJ-3G/HJ-C52开发板头文件
 ********************************************************************/

#ifndef hjc52_H
#define hjc52_H

/*变量类型标识的宏定义,通常做法*/
#define uchar unsigned char //8 0-255
#define uint unsigned int   //16  0-65535
#define ON 1
#define OFF 0

/*定义晶振频率（单位 Hz）*/
#define FOSC  11059200 
//#define FOSC  12000000 
//#define FOSC  22118400 


/* HL-1/HJ-3G/HJ-C52HJ-C52 引脚定义 */
sbit L0  = P1^0; //LED0引脚
sbit L1  = P1^1;
sbit L2  = P1^2;
sbit L3  = P1^3;
sbit L4  = P1^4;
sbit L5  = P1^5;
sbit L6  = P1^6;
sbit L7  = P1^7;
//定义573数码管锁存端
sbit WE  = P2^1;//HJ-C52
sbit DU  = P2^0;//HJ-C52
sbit WE3G  = P2^7;//HL-1/HJ-3G
sbit DU3G  = P2^6;//HL-1/HJ-3G


//sbit RS  = P1^0;   //RS为寄存器选择，1=数据寄存器、0=指令寄存器。
//sbit RW  = P1^1;   //RW为读写信号线，1=读操作，0=写操作。
                   //当RS=RW=0可以写入指令或者显示地址，
                   //当RS=0，RW=1可以读忙信号，
                   //当RS=1，RW=0可以写入数据。

sbit SDI  = P1^5;  //DS1302
sbit SDO  = P1^6;  //DS1302
sbit SCK  = P1^7;  //DS1302


sbit EN	 = P2^5;   //当EN端由高电平跳变成低电平时，液晶模块执行命令。
sbit CS  = P2^6;
sbit RST = P2^7;   //DS1302时钟
sbit RX  = P3^0;
sbit TX  = P3^1;
sbit IR  = P3^2;
sbit B20 = P2^4;
sbit FM =  P2^3;



//定义独立按键 HJ-C52
sbit K1 =  P3^0;
sbit K2 =  P3^1;
sbit K3 =  P3^2;
sbit K4 =  P3^3;
sbit K5 =  P3^4;
sbit K6 =  P3^5;
sbit K7 =  P3^6;
sbit K8 =  P3^7;


/*为方便使用，部分管脚的多重定义*/

#define CLK SW0
#define DAT SW1




//系统初始化函数
void hjc52_init(void);/*HL-1/HJ-3G/HJ-C52主板初始化*/


#endif