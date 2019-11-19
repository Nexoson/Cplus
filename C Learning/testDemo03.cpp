# include <stdio.h>
#include <string.h> 

// 结构体知识01 
struct Student{
 int sid;
 char name[200];
 int age;                                              
};
 
 
int main(void) {
  
  struct Student st = {1000,"张三",20};
  printf("%d %s %d\n", st.sid, st.name, st.age);
  st.sid = 99;
//  st.name = "李四";
  strcpy(st.name, "lisi"); 
  st.age = 22; 
  
  printf("%d %s %d\n", st.sid, st.name, st.age);
  return 0; 
}
