#include <iostream>
using namespace std;


// ����(����)���� 
void test01();
void test02();
void test03(); 

// ȫ�ֱ�������
int g = 30;

//int main(){
//	
//    test01(); 
//    test02(); 
//    test03(); 
//	return 0; 
//}

void test01(){
		
	// �ֲ���������
	int a, b;
	int c;
	
	// ʵ�ʳ�ʼ��
	a = 10;
	b =20;
	c = a+b;
	
	cout << c << endl; 
	
}


void test02(){
		
	// �ֲ���������
	int a, b;
	
	// ʵ�ʳ�ʼ��
	a = 20;
	b = 30;
	
	// �ڷ������� ȫ�ֱ�����ֵ�ᱻ���� 
	g = a+b;
	
	cout << g << endl; 
	
}


void test03(){
	
	cout << g << endl; 

} 
