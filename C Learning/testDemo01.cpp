# include <stdio.h>

int main(void) 
{
	int *p; 
	int i = 10;
	int j;
	
	p = &i;
	j = *p;
	
    printf("p  = %d \n",p);    // pָ��������洢������ ����i���ڴ��ַ 
    printf("*p  = %d \n",*p);  // i��ַ�������  iָ����� 
    printf("&p  = %d \n",&p);  // pָ���Լ��ĵ�ַ 
    
    printf("i  = %d \n",i);   // i ָ��������洢������
    printf("&i  = %d \n",&i); // i ָ���Լ���ַ
    
    printf("j  = %d \n",j);   // j  ָ����� ���洢������ 
    printf("&j  = %d \n",&j); // j ָ���Լ���ַ

}
 
