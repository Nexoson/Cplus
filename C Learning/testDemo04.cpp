# include <stdio.h>
#include <string.h> 

// �ṹ��֪ʶ02
struct Student{
 int sid;
 char name[200];
 int age;                                              
};
 
 
int main(void) {
  
  struct Student st = {1000,"����",20};
  // st.sid = 99;  // ��һ�ַ�ʽ��ֵ 
  
  // �ڶ��ַ�ʽ 
  struct Student * pst;
  pst = &st;
  pst->sid = 99; // pst-sid �ȼ��� (*pst).sid  ��(*pst).sid�ȼ��� st.sid, ����pst->sid �ȼ��� st.sid 
  strcpy(pst->name,"lisi"); 
  pst->age = 18; 
  
  printf("%d %s %d\n", st.sid, st.name, st.age);

  return 0; 
}
