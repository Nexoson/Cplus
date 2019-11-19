# include <stdio.h>
# include <string.h> 

// 结构体知识03
struct Student{
 int sid;
 char name[200];
 int age;                                              
};
 
void f(struct Student * pst);
void g(struct Student  st);
void g2(struct Student  *st); 

int main(void) {
  
  struct Student st;

  f(&st);
  g2(&st);


  return 0; 
}

void f(struct Student * pst){
    
  (*pst).sid = 88;
  strcpy((*pst).name, "aaa");
  pst->age = 17; 

}

// 这种方式 耗内存 耗时间 不推荐 (这种是传整个对象) 
void g(struct Student  st){
    printf("%d %s %d\n", st.sid, st.name, st.age);
}

// 这种方式 耗内存 耗时间 不推荐 (这种是传对象地址) 
void g2(struct Student  *st){
    
    printf("%d %s %d\n", (*st).sid, (*st).name, (*st).age);
    
    printf("%d %s %d\n", st->sid, st->name, st->age);
} 

