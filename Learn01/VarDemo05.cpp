#include <iostream>
 
// 函数声明 
void func1(void);
 
static int count = 10; /* 全局变量 */
 
//int main()
//{
//    while(count--)
//    {
//       func1();
//    }
//    return 0;
//
//}
// 函数定义
void func1(void)
{

    std::cout << "局部静态变量 " << count << std::endl;
}

/**
 * C++ 存储类
 * register 存储类 
 * register 存储类用于定义存储在寄存器中而不是 RAM 中的局部变量。这意味着变量的最大尺寸等于寄存器的大小（通常是一个词），且不能对它应用一元的 '&' 运算符（因为它没有内存位置）。
 * 
 * static 存储类
 * static 修饰符也可以应用于全局变量,当 static 修饰全局变量时，会使变量的作用域限制在声明它的文件内. 使用 static 修饰局部变量可以在函数调用之间保持局部变量的值
 * 
 * extern 存储类
 *
 *  main.cpp
 *  #include <iostream>
 
	int count ;
	extern void write_extern();
	 
	int main()
	{
	   count = 5;
	   write_extern();
	}
 *
 *   support.cpp
 *
	 #include <iostream>
		 
		extern int count;
		 
		void write_extern(void)
		{
		   std::cout << "Count is " << count << std::endl;
		}
 */ 
  
