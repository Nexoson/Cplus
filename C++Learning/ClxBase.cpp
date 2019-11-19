#include <iostream>

// 析构函数解析
1.一般下类的解析函数里面都是释放内存资源,而析构函数不被调用的话就会造成内存泄露
2.析构器都是虚方法是为了当一个基类的指针删除一个派生类的对象时,派生类的析构函数可以被正确调用.
3.当然里面有虚函数的时候,编译器会给类添加一个虚函数表,里边存放着虚函数指针.为了节省资源,只有当一个类被用来作为基类的时候,我们才把析构函数写成虚函数!
class ClxBase
{
public:
    ClxBase(){

    };

    virtual ~ClxBase(){
    };

    virtual void doSomething(){
        std::cout << "Do something in class ClxBase!\n";
    }
};

class ClxDerived : public ClxBase{
public:
    ClxDerived(){
    };

    ~ClxDerived(){
      std::cout << "Output from the destructor of class ClxDerived!\n";
    };

    void doSomething(){
      std::cout << "Do something in class ClxDerived!\n";
    }
};

int main(){
     ClxBase *pTest = new ClxDerived;
     pTest->doSomething();
     delete pTest;
     return 0;

}
