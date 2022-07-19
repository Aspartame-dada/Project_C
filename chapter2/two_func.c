#include <stdio.h>
void butler(void);//函数原型，告知程序需要使用该函数
int main(void){
    printf("I will summon the butler function.\n");
    butler();//调用该函数
    printf("yes!");

}
void butler(void){//函数定义即函数本身的源代码
    printf("you rang,sir?\n");
}