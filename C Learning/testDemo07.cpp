# include <stdio.h>
# include <malloc.h> 

// malloc ��̬�ڴ�02
int main(void){

   int a[5] = {4,5,6,7,8};
   
   int len;
   printf("����������Ҫ���������ĳ���: len=");
   scanf("d%", &len);
   
   int * pArr = (int *)malloc(sizeof(int)*len);

   for(int i=0; i<len; ++i)
   scanf("%d",&pArr[i]);
   
   for (int j=0; j<len; ++j)
   printf("%d \n",*(pArr+j));


   
   free(pArr);  // ��pArr ������Ķ�̬�����20���ֽڵ��ڴ��ͷ�
   
   return 0; 

} 
