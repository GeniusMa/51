/*********************************************************************
 *
 *                          hjc52.h
 *
 *********************************************************************
 * �ļ���: hjc52.h
 * ��  ��: HL-1/HJ-3G/HJ-C52������ͷ�ļ�
 ********************************************************************/

#ifndef hjc52_H
#define hjc52_H

/*�������ͱ�ʶ�ĺ궨��,ͨ������*/
#define uchar unsigned char //8 0-255
#define uint unsigned int   //16  0-65535
#define ON 1
#define OFF 0

/*���徧��Ƶ�ʣ���λ Hz��*/
#define FOSC  11059200 
//#define FOSC  12000000 
//#define FOSC  22118400 


/* HL-1/HJ-3G/HJ-C52HJ-C52 ���Ŷ��� */
sbit L0  = P1^0; //LED0����
sbit L1  = P1^1;
sbit L2  = P1^2;
sbit L3  = P1^3;
sbit L4  = P1^4;
sbit L5  = P1^5;
sbit L6  = P1^6;
sbit L7  = P1^7;
//����573����������
sbit WE  = P2^1;//HJ-C52
sbit DU  = P2^0;//HJ-C52
sbit WE3G  = P2^7;//HL-1/HJ-3G
sbit DU3G  = P2^6;//HL-1/HJ-3G


//sbit RS  = P1^0;   //RSΪ�Ĵ���ѡ��1=���ݼĴ�����0=ָ��Ĵ�����
//sbit RW  = P1^1;   //RWΪ��д�ź��ߣ�1=��������0=д������
                   //��RS=RW=0����д��ָ�������ʾ��ַ��
                   //��RS=0��RW=1���Զ�æ�źţ�
                   //��RS=1��RW=0����д�����ݡ�

sbit SDI  = P1^5;  //DS1302
sbit SDO  = P1^6;  //DS1302
sbit SCK  = P1^7;  //DS1302


sbit EN	 = P2^5;   //��EN���ɸߵ�ƽ����ɵ͵�ƽʱ��Һ��ģ��ִ�����
sbit CS  = P2^6;
sbit RST = P2^7;   //DS1302ʱ��
sbit RX  = P3^0;
sbit TX  = P3^1;
sbit IR  = P3^2;
sbit B20 = P2^4;
sbit FM =  P2^3;



//����������� HJ-C52
sbit K1 =  P3^0;
sbit K2 =  P3^1;
sbit K3 =  P3^2;
sbit K4 =  P3^3;
sbit K5 =  P3^4;
sbit K6 =  P3^5;
sbit K7 =  P3^6;
sbit K8 =  P3^7;


/*Ϊ����ʹ�ã����ֹܽŵĶ��ض���*/

#define CLK SW0
#define DAT SW1




//ϵͳ��ʼ������
void hjc52_init(void);/*HL-1/HJ-3G/HJ-C52�����ʼ��*/


#endif