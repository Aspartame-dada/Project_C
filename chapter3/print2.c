/*
 * @Description: ��ӡ��ͬ���͵ı���
 * @Version: 1.0
 * @Autor: Aspartame
 * @Date: 2022-07-20 14:20:22
 */
#include<stdio.h>
int main(void){
    unsigned int  un=3000000000;
    short end =200;
    long big = 65537;
    long long verybig = 12345678908642;//%lld ��ʾ�޷��ţ� %llu��ʾ�з���
    printf("un = %u ant not %d \n",un,un);
    printf("end = %hd and not %d\n",end,end);//��������short�Զ�ת��Ϊint��int�Ǽ����������������ʱ���Ч������
    printf("big is %ld and not  %hd\n",big,big);
    printf("verybig id %lld and not  %ld\n",verybig,verybig);
    return 0 ;
}
