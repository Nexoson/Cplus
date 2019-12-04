#include <iostream>

int *newInt(int value);

int main(){

    int *x = newInt(20);
    std::cout << "*x=" << *x << "\n";
    std::cout << "x=" <<x << "\n";
    std::cout << "%x=" <<&x << "\n";
    delete x;
    x = NULL;

    return 0;
}

int *newInt(int value){

    int *myInt = new int;
    *myInt = value;

    return myInt;
}
