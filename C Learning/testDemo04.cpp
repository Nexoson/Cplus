# include <stdio.h>
#include <string.h> 

// 结构体知识02
struct Student{
 int sid;
 char name[200];
 int age;                                              
};
 
 
int main(void) {
  
  struct Student st = {1000,"张三",20};
  // st.sid = 99;  // 第一种方式赋值 
  
  // 第二种方式 
  struct Student * pst;
  pst = &st;
  pst->sid = 99; // pst-sid 等价于 (*pst).sid  而(*pst).sid等价于 st.sid, 所以pst->sid 等价于 st.sid 
  strcpy(pst->name,"lisi"); 
  pst->age = 18; 
  
  printf("%d %s %d\n", st.sid, st.name, st.age);

  return 0; 
}
