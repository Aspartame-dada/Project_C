
#include<stdio.h>
int main(void){
float weight;//����
float value;
 printf("are you worth you weight in platinum?\n");
 printf("let's check it out.\n");
 printf("please enter you weight in pounds:\n");
 //��ȡ�û�����
 scanf("%f",&weight);

 value=1700.0*weight*14.5833;
 printf("your weight in platinum is worth $ %.2f.\n",value);// .2���ھ�׼�������С����λ��



    return 0;
}