#include "stc.h"
#include "hjc52.h"
#include "delay.h"
void main()
{
	hjc52_init();//HL-1/HJ-3G/HJ-C52主板初始化函数
	P1=0xff;
	while(1)
		{
	    L0=K1;
        L1=K2;
	    L2=K3;
        L3=K4;
		}   

}


