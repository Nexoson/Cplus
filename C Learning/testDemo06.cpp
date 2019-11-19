# include <stdio.h>
# include <malloc.h> 

// malloc 动态内存01
int main(void){

   int a[5] = {4,5,6,7,8};
   
   int len;
   printf("请输入你需要分配的数组的长度: len=");
   scanf("d%", &len);
   
   int * pArr = (int *)malloc(sizeof(int)*len);
   *pArr = 4; // 类似于 a[0] = 4;
   pArr[1] = 10; // 类似于a[1] = 10;
   printf("%d %d", *pArr, pArr[1]); 
   
   free(pArr);  // 把pArr 所代表的动态分配的20个字节的内存释放
   
   return 0; 

} 
