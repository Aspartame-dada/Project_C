#include <stdio.h>
void butler(void);//����ԭ�ͣ���֪������Ҫʹ�øú���
int main(void){
    printf("I will summon the butler function.\n");
    butler();//���øú���
    printf("yes!");

}
void butler(void){//�������弴���������Դ����
    printf("you rang,sir?\n");
}