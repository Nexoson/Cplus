# include <stdio.h> 

int f(); 

// �纯��ʹ���ڴ�01
int main(void)  {
   int i = 10;
   i = f();
   printf("i = %d\n",i);
  
} 

int f(){
	
	int j = 20;
	return j;
} 
