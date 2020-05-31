#include <iostream>
using namespace std;


// 函数(方法)声明 
void test01();
void test02();
void test03(); 

// 全局变量声明
int g = 30;

//int main(){
//	
//    test01(); 
//    test02(); 
//    test03(); 
//	return 0; 
//}

void test01(){
		
	// 局部变量声明
	int a, b;
	int c;
	
	// 实际初始化
	a = 10;
	b =20;
	c = a+b;
	
	cout << c << endl; 
	
}


void test02(){
		
	// 局部变量声明
	int a, b;
	
	// 实际初始化
	a = 20;
	b = 30;
	
	// 在方法区内 全局变量的值会被覆盖 
	g = a+b;
	
	cout << g << endl; 
	
}


void test03(){
	
	cout << g << endl; 

} 
