//file: float_two_zero.c
#include "stdio.h"

union
{
 char c[4];           //�����壬���������洢�ռ�
 float f;
 int i;
} t1,t2;

int main()
{
  t1.i=0X80000000;   //ֱ�ӻ����븳ֵ�������Ϊ������Ϊ����
  t2.i=0X00000000;   //ֱ�ӻ����븳ֵ�������Ϊ������Ϊ����
  if (t1.f==t2.f)
   printf("float data is equal\n");
  if (t1.i!=t2.i)
   printf("int data is not equal\n");
}
