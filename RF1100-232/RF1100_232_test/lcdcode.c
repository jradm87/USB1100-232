
#include "lcdcode.h"


unsigned char code newmsgtech[]=
{
/*------------------------------------------------------------------------------
;  ���������룬������ģ��ʽ���ã�ע��ѡ����ȷ��ȡģ������ֽ�λ˳��
;  Դ�ļ� / ���� :   ���������Ƽ�  
;  �����ߣ����أ�: 128��16
------------------------------------------------------------------------------*/
0x80,0x10,
0x00,0x00,0x00,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x00,0x00,0x00,0x00,
0x08,0x08,0xE8,0xFF,0x48,0x80,0x08,0xC8,0x49,0x4E,0x48,0xC8,0x08,0x08,0x08,0x00,
0x00,0xE0,0x00,0x00,0xFF,0x20,0xC0,0x00,0xFE,0x10,0x60,0x80,0x00,0xFF,0x00,0x00,
0x00,0x08,0x08,0x08,0x08,0x08,0xF8,0x08,0x80,0x40,0x40,0x00,0x00,0x00,0x00,0x00, /*--*/  
0x08,0x08,0x08,0xFF,0x88,0x48,0x00,0x00,0x08,0x88,0x48,0x38,0x08,0x08,0x08,0x00, /*--*/ 
0x10,0x12,0x92,0x72,0xFE,0x51,0x91,0x00,0x22,0xCC,0x00,0x00,0xFF,0x00,0x00,0x00, /*--*/ 
0x08,0x08,0x88,0xFF,0x48,0x28,0x00,0xC8,0x48,0x48,0x7F,0x48,0xC8,0x48,0x08,0x00, /*--*/ 
0x00,0x00,0x00,0x00,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x00,0x00,0x00,
0x00,0x00,0x00,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x00,0x00,0x00,0x00,
0x04,0x03,0x00,0xFF,0x00,0x40,0x30,0x0F,0x00,0x00,0x00,0x3F,0x40,0x40,0x78,0x00,  
0x01,0x80,0x60,0x18,0x07,0x00,0x00,0x00,0x7F,0x00,0x00,0x01,0x00,0xFF,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x19,0x32,0x64,0x44,0x44,0x40,0x40,0x20,0x00, /*--*/ 
0x04,0x44,0x82,0x7F,0x00,0x02,0x02,0x01,0x7D,0x44,0x44,0x44,0x44,0x44,0x7C,0x00, /*--*/ 
0x04,0x02,0x01,0x00,0xFF,0x00,0x04,0x04,0x04,0x02,0x02,0x02,0xFF,0x01,0x01,0x00, /*--*/ 
0x01,0x41,0x80,0x7F,0x00,0x40,0x40,0x20,0x13,0x0C,0x0C,0x12,0x21,0x60,0x20,0x00, /*--*/ 
0x00,0x00,0x00,0x00,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x00,0x00,0x00,
};

unsigned char code wxzj[]=
{
/*------------------------------------------------------------------------------
;  ���������룬������ģ��ʽ���ã�ע��ѡ����ȷ��ȡģ������ֽ�λ˳��
;  Դ�ļ� / ���� : ����ר��
;  �����ߣ����أ�: 56��14
------------------------------------------------------------------------------*/
0x38,0x0E,0x07,//����������,�ߵ��������������ֽ������������ÿ�ѡ
0x20,0x21,0x21,0x21,0xA1,0x61,0x3F,0xE1,0x21,0x21,0x21,0x21,0x20,0x00,0x10,0x98,
0x56,0x31,0x08,0x40,0x48,0x48,0xFF,0x48,0x49,0x4A,0x40,0x00,0x20,0x24,0x24,0x24,
0xE4,0x3C,0x27,0x24,0x24,0x24,0x24,0x20,0x20,0x00,0x0E,0x42,0x4A,0x2A,0x9A,0x6A,
0xCB,0x0A,0x8A,0x4A,0x4A,0x02,0x0E,0x00,0x10,0x10,0x08,0x06,0x01,0x00,0x00,0x0F,
0x10,0x10,0x10,0x10,0x0C,0x00,0x09,0x09,0x05,0x05,0x05,0x08,0x08,0x04,0x07,0x0A,
0x11,0x11,0x18,0x00,0x00,0x00,0x00,0x01,0x05,0x09,0x09,0x19,0x15,0x03,0x01,0x00,
0x00,0x00,0x10,0x12,0x09,0x09,0x14,0x12,0x0F,0x01,0x02,0x04,0x08,0x18,0x08,0x00,
};




unsigned char code web[]=
{
/*------------------------------------------------------------------------------
;  ���������룬������ģ��ʽ���ã�ע��ѡ����ȷ��ȡģ������ֽ�λ˳��
;  Դ�ļ� / ���� : www.newmsg.com
;  �����ߣ����أ�: 112��16
;  ��ģ��ʽ/��С : ��ɫ����Һ����ģ������ȡģ���ֽڵ���/224�ֽ�
;  ����ת������  : 2009-4-1 11:34:57
------------------------------------------------------------------------------*/
0x70,0x10,
0x80,0x80,0x00,0x80,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x80,0x00,0x80,0x80,0x80,
0x80,0x80,0x00,0x80,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x40,0x40,0x00,0x00,0x00,0x80,  /*-----*/
0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,  /*-----*/
0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,  /*---- */
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00,
0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,
0x0F,0x30,0x0C,0x03,0x0C,0x30,0x0F,0x00,0x0F,0x30,0x0C,0x03,0x0C,0x30,0x0F,0x00,
0x0F,0x30,0x0C,0x03,0x0C,0x30,0x0F,0x00,0x00,0x30,0x30,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x22,0x22,0x1F,0x02,0x02,0x02,0x00,0x00,0x00,0x00,  /*------*/
0x23,0x24,0x24,0x24,0x1F,0x00,0x00,0x00,0x02,0x02,0x1F,0x22,0x22,0x10,0x00,0x00,  /*------*/
0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00,0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00,  /*-------*/
0x00,0x30,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x11,0x20,0x20,0x20,0x11,0x00,
0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00,0x20,0x3F,0x20,0x00,0x3F,0x20,0x00,0x3F,
};




unsigned char code dqwd[]=
{
/*------------------------------------------------------------------------------
;  ���������룬������ģ��ʽ���ã�ע��ѡ����ȷ��ȡģ������ֽ�λ˳��
;  Դ�ļ� / ���� : ��ǰ�¶ȣ�
;  �����ߣ����أ�: 80��16
------------------------------------------------------------------------------*/
0x50,0x10,
0x00,0x00,0x40,0x42,0x5C,0x48,0x40,0x40,0x7F,0x40,0x50,0x4E,0x44,0xC0,0x00,0x00,
0x08,0x08,0xE8,0xA8,0xA9,0xAE,0xEA,0x08,0x08,0xC8,0x0C,0x0B,0xEA,0x08,0x08,0x00,
0x10,0x21,0x86,0x70,0x00,0x7E,0x4A,0x4A,0x4A,0x4A,0x4A,0x7E,0x00,0x00,0x00,0x00,
0x00,0x00,0xFC,0x04,0x24,0x24,0xFC,0xA5,0xA6,0xA4,0xFC,0x24,0x24,0x24,0x04,0x00,
0x00,0x00,0x38,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x20,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x7F,0x00,0x00,
0x00,0x00,0x7F,0x04,0x24,0x44,0x3F,0x00,0x00,0x1F,0x40,0x80,0x7F,0x00,0x00,0x00,
0x02,0xFE,0x01,0x40,0x7F,0x41,0x41,0x7F,0x41,0x41,0x7F,0x41,0x41,0x7F,0x40,0x00,
0x80,0x60,0x1F,0x80,0x80,0x42,0x46,0x2A,0x12,0x12,0x2A,0x26,0x42,0xC0,0x40,0x00,
0x00,0x00,0x38,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};



unsigned char code asc_code[]={
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x38,0xfc,0xfc,0x38,0x0,0x0,0x0,0x0,0x0,0xd,0xd,0x0,0x0,
0x0,0x0,0xe,0x1e,0x0,0x0,0x1e,0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x20,0xf8,0xf8,0x20,0xf8,0xf8,0x20,0x0,0x2,0xf,0xf,0x2,0xf,0xf,0x2,
0x0,0x38,0x7c,0x44,0x47,0x47,0xcc,0x98,0x0,0x6,0xc,0x8,0x38,0x38,0xf,0x7,
0x0,0x30,0x30,0x0,0x80,0xc0,0x60,0x30,0x0,0xc,0x6,0x3,0x1,0x0,0xc,0xc,
0x0,0x80,0xd8,0x7c,0xe4,0xbc,0xd8,0x40,0x0,0x7,0xf,0x8,0x8,0x7,0xf,0x8,
0x0,0x0,0x10,0x1e,0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0xf0,0xf8,0xc,0x4,0x0,0x0,0x0,0x0,0x3,0x7,0xc,0x8,0x0,
0x0,0x0,0x0,0x4,0xc,0xf8,0xf0,0x0,0x0,0x0,0x0,0x8,0xc,0x7,0x3,0x0,
0x0,0x80,0xa0,0xe0,0xc0,0xc0,0xe0,0xa0,0x0,0x0,0x2,0x3,0x1,0x1,0x3,0x2,
0x0,0x0,0x80,0x80,0xe0,0xe0,0x80,0x80,0x0,0x0,0x0,0x0,0x3,0x3,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x1e,0xe,0x0,0x0,
0x0,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc,0xc,0x0,0x0,
0x0,0x0,0x0,0x0,0x80,0xc0,0x60,0x30,0x0,0xc,0x6,0x3,0x1,0x0,0x0,0x0,
0x0,0xf0,0xf8,0xc,0xc4,0xc,0xf8,0xf0,0x0,0x3,0x7,0xc,0x8,0xc,0x7,0x3,
0x0,0x0,0x10,0x18,0xfc,0xfc,0x0,0x0,0x0,0x0,0x8,0x8,0xf,0xf,0x8,0x8,
0x0,0x8,0xc,0x84,0xc4,0x64,0x3c,0x18,0x0,0xe,0xf,0x9,0x8,0x8,0xc,0xc,
0x0,0x8,0xc,0x44,0x44,0x44,0xfc,0xb8,0x0,0x4,0xc,0x8,0x8,0x8,0xf,0x7,
0x0,0xc0,0xe0,0xb0,0x98,0xfc,0xfc,0x80,0x0,0x0,0x0,0x0,0x8,0xf,0xf,0x8,
0x0,0x7c,0x7c,0x44,0x44,0x44,0xc4,0x84,0x0,0x4,0xc,0x8,0x8,0x8,0xf,0x7,
0x0,0xf0,0xf8,0x4c,0x44,0x44,0xc0,0x80,0x0,0x7,0xf,0x8,0x8,0x8,0xf,0x7,
0x0,0xc,0xc,0x4,0x84,0xc4,0x7c,0x3c,0x0,0x0,0x0,0xf,0xf,0x0,0x0,0x0,

0x0,0xb8,0xfc,0x44,0x44,0x44,0xfc,0xb8,0x0,0x7,0xf,0x8,0x8,0x8,0xf,0x7,
0x0,0x38,0x7c,0x44,0x44,0x44,0xfc,0xf8,0x0,0x0,0x8,0x8,0x8,0xc,0x7,0x3,
0x0,0x0,0x0,0x0,0x30,0x30,0x0,0x0,0x0,0x0,0x0,0x0,0x6,0x6,0x0,0x0,
0x0,0x0,0x0,0x0,0x30,0x30,0x0,0x0,0x0,0x0,0x0,0x8,0xe,0x6,0x0,0x0,
0x0,0x0,0x80,0xc0,0x60,0x30,0x18,0x8,0x0,0x0,0x0,0x1,0x3,0x6,0xc,0x8,
0x0,0x0,0x20,0x20,0x20,0x20,0x20,0x20,0x0,0x0,0x1,0x1,0x1,0x1,0x1,0x1,
0x0,0x0,0x8,0x18,0x30,0x60,0xc0,0x80,0x0,0x0,0x8,0xc,0x6,0x3,0x1,0x0,
0x0,0x18,0x1c,0x4,0xc4,0xe4,0x3c,0x18,0x0,0x0,0x0,0x0,0xd,0xd,0x0,0x0,
0x0,0xf0,0xf8,0x8,0xc8,0xc8,0xf8,0xf0,0x0,0x7,0xf,0x8,0xb,0xb,0xb,0x1,
0x0,0xe0,0xf0,0x98,0x8c,0x98,0xf0,0xe0,0x0,0xf,0xf,0x0,0x0,0x0,0xf,0xf,
0x0,0x4,0xfc,0xfc,0x44,0x44,0xfc,0xb8,0x0,0x8,0xf,0xf,0x8,0x8,0xf,0x7,
0x0,0xf0,0xf8,0xc,0x4,0x4,0xc,0x18,0x0,0x3,0x7,0xc,0x8,0x8,0xc,0x6,
0x0,0x4,0xfc,0xfc,0x4,0xc,0xf8,0xf0,0x0,0x8,0xf,0xf,0x8,0xc,0x7,0x3,
0x0,0x4,0xfc,0xfc,0x44,0xe4,0xc,0x1c,0x0,0x8,0xf,0xf,0x8,0x8,0xc,0xe,
0x0,0x4,0xfc,0xfc,0x44,0xe4,0xc,0x1c,0x0,0x8,0xf,0xf,0x8,0x0,0x0,0x0,
0x0,0xf0,0xf8,0xc,0x84,0x84,0x8c,0x98,0x0,0x3,0x7,0xc,0x8,0x8,0x7,0xf,
0x0,0xfc,0xfc,0x40,0x40,0x40,0xfc,0xfc,0x0,0xf,0xf,0x0,0x0,0x0,0xf,0xf,
0x0,0x0,0x0,0x4,0xfc,0xfc,0x4,0x0,0x0,0x0,0x0,0x8,0xf,0xf,0x8,0x0,
0x0,0x0,0x0,0x0,0x4,0xfc,0xfc,0x4,0x0,0x7,0xf,0x8,0x8,0xf,0x7,0x0,
0x0,0x4,0xfc,0xfc,0xc0,0xe0,0x3c,0x1c,0x0,0x8,0xf,0xf,0x0,0x1,0xf,0xe,
0x0,0x4,0xfc,0xfc,0x4,0x0,0x0,0x0,0x0,0x8,0xf,0xf,0x8,0x8,0xc,0xe,
0x0,0xfc,0xfc,0x38,0x70,0x38,0xfc,0xfc,0x0,0xf,0xf,0x0,0x0,0x0,0xf,0xf,
0x0,0xfc,0xfc,0x38,0x70,0xe0,0xfc,0xfc,0x0,0xf,0xf,0x0,0x0,0x0,0xf,0xf,
0x0,0xf8,0xfc,0x4,0x4,0x4,0xfc,0xf8,0x0,0x7,0xf,0x8,0x8,0x8,0xf,0x7,

0x0,0x4,0xfc,0xfc,0x44,0x44,0x7c,0x38,0x0,0x8,0xf,0xf,0x8,0x0,0x0,0x0,
0x0,0xf8,0xfc,0x4,0x4,0x4,0xfc,0xf8,0x0,0x7,0xf,0x8,0xe,0x3c,0x3f,0x27,
0x0,0x4,0xfc,0xfc,0x44,0xc4,0xfc,0x38,0x0,0x8,0xf,0xf,0x0,0x0,0xf,0xf,
0x0,0x18,0x3c,0x64,0x44,0xc4,0x9c,0x18,0x0,0x6,0xe,0x8,0x8,0x8,0xf,0x7,
0x0,0x0,0x1c,0xc,0xfc,0xfc,0xc,0x1c,0x0,0x0,0x0,0x8,0xf,0xf,0x8,0x0,
0x0,0xfc,0xfc,0x0,0x0,0x0,0xfc,0xfc,0x0,0x7,0xf,0x8,0x8,0x8,0xf,0x7,
0x0,0xfc,0xfc,0x0,0x0,0x0,0xfc,0xfc,0x0,0x1,0x3,0x6,0xc,0x6,0x3,0x1,
0x0,0xfc,0xfc,0x0,0xc0,0x0,0xfc,0xfc,0x0,0x7,0xf,0xe,0x3,0xe,0xf,0x7,
0x0,0xc,0x3c,0xf0,0xe0,0xf0,0x3c,0xc,0x0,0xc,0xf,0x3,0x1,0x3,0xf,0xc,
0x0,0x0,0x3c,0x7c,0xc0,0xc0,0x7c,0x3c,0x0,0x0,0x0,0x8,0xf,0xf,0x8,0x0,
0x0,0x1c,0xc,0x84,0xc4,0x64,0x3c,0x1c,0x0,0xe,0xf,0x9,0x8,0x8,0xc,0xe,
0x0,0x0,0x0,0xfc,0xfc,0x4,0x4,0x0,0x0,0x0,0x0,0xf,0xf,0x8,0x8,0x0,
0x0,0x38,0x70,0xe0,0xc0,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x3,0x7,0xe,
0x0,0x0,0x0,0x4,0x4,0xfc,0xfc,0x0,0x0,0x0,0x0,0x8,0x8,0xf,0xf,0x0,
0x0,0x8,0xc,0x6,0x3,0x6,0xc,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x0,0x0,0x0,0x3,0x7,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0xa0,0xa0,0xa0,0xe0,0xc0,0x0,0x0,0x7,0xf,0x8,0x8,0x7,0xf,0x8,
0x0,0x4,0xfc,0xfc,0x20,0x60,0xc0,0x80,0x0,0x0,0xf,0xf,0x8,0x8,0xf,0x7,
0x0,0xc0,0xe0,0x20,0x20,0x20,0x60,0x40,0x0,0x7,0xf,0x8,0x8,0x8,0xc,0x4,
0x0,0x80,0xc0,0x60,0x24,0xfc,0xfc,0x0,0x0,0x7,0xf,0x8,0x8,0x7,0xf,0x8,
0x0,0xc0,0xe0,0xa0,0xa0,0xa0,0xe0,0xc0,0x0,0x7,0xf,0x8,0x8,0x8,0xc,0x4,
0x0,0x40,0xf8,0xfc,0x44,0xc,0x18,0x0,0x0,0x8,0xf,0xf,0x8,0x0,0x0,0x0,
0x0,0xc0,0xe0,0x20,0x20,0xc0,0xe0,0x20,0x0,0x27,0x6f,0x48,0x48,0x7f,0x3f,0x0,

0x0,0x4,0xfc,0xfc,0x40,0x20,0xe0,0xc0,0x0,0x8,0xf,0xf,0x0,0x0,0xf,0xf,
0x0,0x0,0x0,0x20,0xec,0xec,0x0,0x0,0x0,0x0,0x0,0x8,0xf,0xf,0x8,0x0,
0x0,0x0,0x0,0x0,0x0,0x20,0xec,0xec,0x0,0x0,0x30,0x70,0x40,0x40,0x7f,0x3f,
0x0,0x4,0xfc,0xfc,0x80,0xc0,0x60,0x20,0x0,0x8,0xf,0xf,0x1,0x3,0xe,0xc,
0x0,0x0,0x0,0x4,0xfc,0xfc,0x0,0x0,0x0,0x0,0x0,0x8,0xf,0xf,0x8,0x0,
0x0,0xe0,0xe0,0x60,0xc0,0x60,0xe0,0xc0,0x0,0xf,0xf,0x0,0x7,0x0,0xf,0xf,
0x0,0x20,0xe0,0xc0,0x20,0x20,0xe0,0xc0,0x0,0x0,0xf,0xf,0x0,0x0,0xf,0xf,
0x0,0xc0,0xe0,0x20,0x20,0x20,0xe0,0xc0,0x0,0x7,0xf,0x8,0x8,0x8,0xf,0x7,
0x0,0x20,0xe0,0xc0,0x20,0x20,0xe0,0xc0,0x0,0x40,0x7f,0x7f,0x48,0x8,0xf,0x7,
0x0,0xc0,0xe0,0x20,0x20,0xc0,0xe0,0x20,0x0,0x7,0xf,0x8,0x48,0x7f,0x7f,0x40,
0x0,0x20,0xe0,0xc0,0x60,0x20,0xe0,0xc0,0x0,0x8,0xf,0xf,0x8,0x0,0x0,0x0,
0x0,0x40,0xe0,0xa0,0x20,0x20,0x60,0x40,0x0,0x4,0xc,0x9,0x9,0xb,0xe,0x4,
0x0,0x20,0x20,0xf8,0xfc,0x20,0x20,0x0,0x0,0x0,0x0,0x7,0xf,0x8,0xc,0x4,
0x0,0xe0,0xe0,0x0,0x0,0xe0,0xe0,0x0,0x0,0x7,0xf,0x8,0x8,0x7,0xf,0x8,
0x0,0x0,0xe0,0xe0,0x0,0x0,0xe0,0xe0,0x0,0x0,0x3,0x7,0xc,0xc,0x7,0x3,
0x0,0xe0,0xe0,0x0,0x80,0x0,0xe0,0xe0,0x0,0x7,0xf,0xc,0x7,0xc,0xf,0x7,
0x0,0x20,0x60,0xc0,0x80,0xc0,0x60,0x20,0x0,0x8,0xc,0x7,0x3,0x7,0xc,0x8,
0x0,0xe0,0xe0,0x0,0x0,0x0,0xe0,0xe0,0x0,0x47,0x4f,0x48,0x48,0x68,0x3f,0x1f,
0x0,0x60,0x60,0x20,0xa0,0xe0,0x60,0x20,0x0,0xc,0xe,0xb,0x9,0x8,0xc,0xc,
0x0,0x0,0x40,0x40,0xf8,0xbc,0x4,0x4,0x0,0x0,0x0,0x0,0x7,0xf,0x8,0x8,
0x0,0x0,0x0,0x0,0xbc,0xbc,0x0,0x0,0x0,0x0,0x0,0x0,0xf,0xf,0x0,0x0,
0x0,0x0,0x4,0x4,0xbc,0xf8,0x40,0x40,0x0,0x0,0x8,0x8,0xf,0x7,0x0,0x0,
0x0,0x8,0xc,0x4,0xc,0x8,0xc,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x80,0xc0,0x60,0x30,0x60,0xc0,0x80,0x0,0x7,0x7,0x4,0x4,0x4,0x7,0x7
};


unsigned char code dot[]=
{
/*------------------------------------------------------------------------------
;  ���������룬������ģ��ʽ���ã�ע��ѡ����ȷ��ȡģ������ֽ�λ˳��
;  Դ�ļ� / ���� : .
;  �����ߣ����أ�: 8��16
------------------------------------------------------------------------------*/
0x08,0x10,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x1E,0x1C,0x00,0x00,0x00,0x00
};



unsigned char code du[]=
{
/*------------------------------------------------------------------------------
;  ���������룬������ģ��ʽ���ã�ע��ѡ����ȷ��ȡģ������ֽ�λ˳��
;  Դ�ļ� / ���� : ��
;  �����ߣ����أ�: 16��16
------------------------------------------------------------------------------*/
0x10,0x10,
0x00,0x18,0x24,0x24,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
