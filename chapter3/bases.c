/*
 * @Description: ��ʾ�˽��ƺ�ʮ������ 
 * @Version: 1.0
 * @Autor: Aspartame
 * @Date: 2022-07-20 14:02:16
 */
#include<stdio.h>
int main(void){
    int x = 100;
    printf("dex = %d; octal = %o;hex = %x\n",x,x,x);//��ʾ��������
    printf("dex = %d; octal = %#o;hex = %#x\n",x,x,x);//��ʾ��������ǰ׺ 0��0x��0X
    return 0;
}