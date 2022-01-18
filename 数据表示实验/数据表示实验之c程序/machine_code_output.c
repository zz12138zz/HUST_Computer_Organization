//file: machine_code_output.c
#include <stdio.h>

//����ַ���ʮ�����Ʊ���
void char_hex_out(char a)
{
 const char HEX[]="0123456789ABCDEF";
 int index=a&0x0F;
 printf("%c%c", HEX[(a&0xF0)>>4],HEX[a&0x0F]);
 }

//���4���ֽ����ݵ�ʮ�����Ʊ��룬���������4�ֽڱ����Ļ�����
void four_byte_out (char *addr)
{
char_hex_out (*(addr +3));   //���ָ�������ֵ��ָ�뱾�������ڴ��ַ���޷�����
char_hex_out (*(addr +2));   //�������С�˴洢
char_hex_out (*(addr +1));
char_hex_out (*(addr +0));
printf("\n");
}

main()
{
int a= -1;
int b=2147483648;           //2147483648=231    4294967296=232
int c= -b;
unsigned int d = -2147483648;
printf ("a = %u = %d = 0x%x  \n",a,a,a);
printf ("b = %u = %d = 0x%x  \n",b,b,b);
printf ("c = %u = %d = 0x%x  \n",c,c,c);
printf ("d = %u = %d = 0x%x  \n",d,d,d);

printf("\nd��s memory addr  = 0x%x",&d);  //�������d������ַ
printf("\nd��s machine code = 0x");
four_byte_out (&d);      //�������d�Ļ�����

return;
}
