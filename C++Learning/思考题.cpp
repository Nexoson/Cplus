#include <iostream>

class animal
{
public:
    void sleep(){
        std::cout << "animal sleep" << std::endl;
    }
    virtual void breathe(){
        std::cout << "animal breathe";
    }
};

class fish : public animal {
public:
    void breathe(){
        std::cout << "fish bubble" << std::endl;
    }

};

//int main()
//{
//   fish fh;
//   animal *pAn = &fh;
//
//   pAn ->breathe();
//
//   return 0;
//}
