# include <stdio.h>
#include <string.h> 

// �ṹ��֪ʶ01 
struct Student{
 int sid;
 char name[200];
 int age;                                              
};
 
 
int main(void) {
  
  struct Student st = {1000,"����",20};
  printf("%d %s %d\n", st.sid, st.name, st.age);
  st.sid = 99;
//  st.name = "����";
  strcpy(st.name, "lisi"); 
  st.age = 22; 
  
  printf("%d %s %d\n", st.sid, st.name, st.age);
  return 0; 
}
