# include <stdio.h>
# include <malloc.h> 

// malloc ��̬�ڴ�01
int main(void){

   int a[5] = {4,5,6,7,8};
   
   int len;
   printf("����������Ҫ���������ĳ���: len=");
   scanf("d%", &len);
   
   int * pArr = (int *)malloc(sizeof(int)*len);
   *pArr = 4; // ������ a[0] = 4;
   pArr[1] = 10; // ������a[1] = 10;
   printf("%d %d", *pArr, pArr[1]); 
   
   free(pArr);  // ��pArr ������Ķ�̬�����20���ֽڵ��ڴ��ͷ�
   
   return 0; 

} 
