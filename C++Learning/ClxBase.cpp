#include <iostream>

// ������������
1.һ������Ľ����������涼���ͷ��ڴ���Դ,�����������������õĻ��ͻ�����ڴ�й¶
2.�����������鷽����Ϊ�˵�һ�������ָ��ɾ��һ��������Ķ���ʱ,������������������Ա���ȷ����.
3.��Ȼ�������麯����ʱ��,��������������һ���麯����,��ߴ�����麯��ָ��.Ϊ�˽�ʡ��Դ,ֻ�е�һ���౻������Ϊ�����ʱ��,���ǲŰ���������д���麯��!
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
