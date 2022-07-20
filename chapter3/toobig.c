/*
 * @Description: 整数溢出 使用%u来显示说明 unsigned int 类型数值
 * @Version: 1.0
 * @Autor: Aspartame
 * @Date: 2022-07-20 14:08:35
 */
#include<stdio.h>
int main(void){
 int i = 2147483647;
 unsigned int j = 4294967295;
 printf("%d %d %d\n",i,i+1,i+2);
 printf("%u %u %u\n",j,j+1,j+2);
    return 0;
}