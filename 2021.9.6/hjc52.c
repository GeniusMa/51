/*********************************************************************
 *
 *                         HJ-C52.c
 *
 *********************************************************************
 * 描    述: HL-1/HJ-3G/HJ-C52主板初始化函数
 * 开发平台: HJ-C52开发板+KEIL C51
 ********************************************************************/

#include "stc.h"/*包含STC单片机头文件*/
#include "hjc52.h"/*包含HL-1/HJ-3G/HJ-C52开发板头文件*/

/*HJ-C52主板初始化函数*/
void hjc52_init(void)
{
	/* HJ-C52 引脚方向、输出初值定义 */
	FM=1;/*蜂鸣器*/
	EN=0;/*让LCD1602数据口处于输入状态，相当于LCD1602使不能，让其释放数据总线*/
	CS=1;/*TF卡使不能*/
	RST=0;/*ds1302使不能*/
}

