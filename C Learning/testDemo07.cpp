# include <stdio.h>
# include <malloc.h> 

// malloc 动态内存02
int main(void){

   int a[5] = {4,5,6,7,8};
   
   int len;
   printf("请输入你需要分配的数组的长度: len=");
   scanf("d%", &len);
   
   int * pArr = (int *)malloc(sizeof(int)*len);

   for(int i=0; i<len; ++i)
   scanf("%d",&pArr[i]);
   
   for (int j=0; j<len; ++j)
   printf("%d \n",*(pArr+j));


   
   free(pArr);  // 把pArr 所代表的动态分配的20个字节的内存释放
   
   return 0; 

} 
