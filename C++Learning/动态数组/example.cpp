#include <iostream>
#include <string>

int main(){

    unsigned int count = 0;
    std::cout << "请输入数组的元素个数: \n";
    std::cin >> count;

    int *x = new int[count];

    for(int i=0; i <count; i++){
        x[i] = i;
    }

    for(int i=0; i < count; i++){
        std::cout << "x[" << i << "]的值是: " << x[i] << "\n";
    }

    // 删除动态数据
     delete [] x;

    // 将指针置为null
     x = NULL;

     return 0;
}
