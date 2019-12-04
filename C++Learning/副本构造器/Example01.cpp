#include <iostream>
#include <string>

class MyClass
{
public:
    MyClass(int *p);
    MyClass(const MyClass &rhs);
    ~MyClass();

    MyClass &operator = (const MyClass &rhs);
    void print();

private:
    int *ptr;
};


MyClass::MyClass(int *p){
    std::cout <<"进入主构造器\n";
    ptr = p;
    std::cout << "离开主构造器\n";
}


MyClass::MyClass(const MyClass &rhs){
    std::cout << "进入副本构造器\n";
    *this = rhs;
    std::cout << "离开副本构造器\n";
}

MyClass::~MyClass(){
   std::cout << "进入析构器\n";
   delete ptr;
   std::cout << "离开析构器\n";
}

MyClass &MyClass::operator=(const MyClass &rhs){
   std::cout << "进入赋值语句重载\n";
   if( this != &rhs ){
    delete ptr;
    ptr = new int;
    *ptr = *rhs.ptr;
   }
   else{
    std::cout << "赋值号两边为同个对象,不做处理!\n";
   }

   std::cout << "离开赋值语句重载\n";

   return *this;
}

void MyClass::print()
{
    std::cout << *ptr << std::endl;
}

int main(){

MyClass obj1(new int(1));
MyClass obj2(new int(2));
obj2 =obj1;
obj1.print();
obj2.print();

std::cout << "----------------------------------\n";

MyClass obj3(new int(3));
MyClass obj4 = obj3;
obj3.print();
obj4.print();

std::cout << "----------------------------------\n";

MyClass obj5(new int(5));
obj5 =obj5;
obj5.print();


return 0;




}
