
#include<stdio.h>
int main(void){
float weight;//体重
float value;
 printf("are you worth you weight in platinum?\n");
 printf("let's check it out.\n");
 printf("please enter you weight in pounds:\n");
 //获取用户输入
 scanf("%f",&weight);

 value=1700.0*weight*14.5833;
 printf("your weight in platinum is worth $ %.2f.\n",value);// .2用于精准控制输出小数后位数



    return 0;
}