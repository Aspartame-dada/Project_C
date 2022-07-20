/*
 * @Description: 显示八进制和十六进制 
 * @Version: 1.0
 * @Autor: Aspartame
 * @Date: 2022-07-20 14:02:16
 */
#include<stdio.h>
int main(void){
    int x = 100;
    printf("dex = %d; octal = %o;hex = %x\n",x,x,x);//显示各进制数
    printf("dex = %d; octal = %#o;hex = %#x\n",x,x,x);//显示各进制数前缀 0、0x、0X
    return 0;
}