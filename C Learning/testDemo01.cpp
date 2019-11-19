# include <stdio.h>

int main(void) 
{
	int *p; 
	int i = 10;
	int j;
	
	p = &i;
	j = *p;
	
    printf("p  = %d \n",p);    // p指针变量即存储的数据 就是i的内存地址 
    printf("*p  = %d \n",*p);  // i地址存的数据  i指针变量 
    printf("&p  = %d \n",&p);  // p指针自己的地址 
    
    printf("i  = %d \n",i);   // i 指针变量即存储的数据
    printf("&i  = %d \n",&i); // i 指针自己地址
    
    printf("j  = %d \n",j);   // j  指针变量 即存储的数据 
    printf("&j  = %d \n",&j); // j 指针自己地址

}
 
