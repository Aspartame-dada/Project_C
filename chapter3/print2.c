/*
 * @Description: 打印不同类型的变量
 * @Version: 1.0
 * @Autor: Aspartame
 * @Date: 2022-07-20 14:20:22
 */
#include<stdio.h>
int main(void){
    unsigned int  un=3000000000;
    short end =200;
    long big = 65537;
    long long verybig = 12345678908642;//%lld 表示无符号， %llu表示有符号
    printf("un = %u ant not %d \n",un,un);
    printf("end = %hd and not %d\n",end,end);//编译器将short自动转化为int，int是计算机处理整数类型时最高效的类型
    printf("big is %ld and not  %hd\n",big,big);
    printf("verybig id %lld and not  %ld\n",verybig,verybig);
    return 0 ;
}
