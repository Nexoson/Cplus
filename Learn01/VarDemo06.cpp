#include <iostream>

using namespace std; 

void test61();
void test62();
void test63();
void test64();
void test65(); 
void test66(); 

 

//int main()
//{
//    test61();
//    test62();
//    test63();
//    test64();
//    test65();
//    return 0;
//}

void test61(){
	
	int a = 21;
	int b = 10;
	int c;
	
	
	c = a +b;
	cout << "Line 1 - c ��ֵ�� " << c << endl; 
	c = a - b;
    cout << "Line 2 - c ��ֵ�� " << c << endl ;
    c = a * b;
    cout << "Line 3 - c ��ֵ�� " << c << endl ;
    c = a / b;
    cout << "Line 4 - c ��ֵ�� " << c << endl ;
    c = a % b;
    cout << "Line 5 - c ��ֵ�� " << c << endl ;
    
    int d = 10; // ��������, �Լ�
	c = d++;
	cout << "Line 6 - c ��ֵ�� " << c << endl;
	d = 10;    // ���¸�ֵ
    c = d--;
    cout << "Line 7 - c ��ֵ�� " << c << endl;
}

void test62(){
	   int a = 21;
	   int b = 10;
	   int c ;
 
	   if( a == b )
	   {
	      cout << "Line 1 - a ���� b" << endl ;
	   }
	   else
	   {
	      cout << "Line 1 - a ������ b" << endl ;
	   }
	   if ( a < b )
	   {
	      cout << "Line 2 - a С�� b" << endl ;
	   }
	   else
	   {
	      cout << "Line 2 - a ��С�� b" << endl ;
	   }
	   if ( a > b )
	   {
	      cout << "Line 3 - a ���� b" << endl ;
	   }
	   else
	   {
	      cout << "Line 3 - a ������ b" << endl ;
	   }
	   /* �ı� a �� b ��ֵ */
	   a = 5;
	   b = 20;
	   if ( a <= b )
	   {
	      cout << "Line 4 - a С�ڻ���� b" << endl ;
	   }
	   if ( b >= a )
	   {
	      cout << "Line 5 - b ���ڻ���� a" << endl ;
	   }
	
}

// �߼������
void test63(){
	   int a = 5;
   int b = 20;
   int c ;
 
   if ( a && b )
   {
      cout << "Line 1 - ����Ϊ��"<< endl ;
   }
   if ( a || b )
   {
      cout << "Line 2 - ����Ϊ��"<< endl ;
   }
   /* �ı� a �� b ��ֵ */
   a = 0;
   b = 10;
   if ( a && b )
   {
      cout << "Line 3 - ����Ϊ��"<< endl ;
   }
   else
   {
      cout << "Line 4 - ������Ϊ��"<< endl ;
   }
   if ( !(a && b) )
   {
      cout << "Line 5 - ����Ϊ��"<< endl ;
   }
	
}

// λ�����
void test64(){
	
   unsigned int a = 60;      // 60 = 0011 1100  
   unsigned int b = 13;      // 13 = 0000 1101
   int c = 0;           
 
   c = a & b;             // 12 = 0000 1100
   cout << "Line 1 - c ��ֵ�� " << c << endl ;
 
   c = a | b;             // 61 = 0011 1101
   cout << "Line 2 - c ��ֵ�� " << c << endl ;
 
   c = a ^ b;             // 49 = 0011 0001
   cout << "Line 3 - c ��ֵ�� " << c << endl ;
 
   c = ~a;                // -61 = 1100 0011
   cout << "Line 4 - c ��ֵ�� " << c << endl ;
 
   c = a << 2;            // 240 = 1111 0000
   cout << "Line 5 - c ��ֵ�� " << c << endl ;
 
   c = a >> 2;            // 15 = 0000 1111
   cout << "Line 6 - c ��ֵ�� " << c << endl ;

  /*
    &	���ͬʱ�����������������У������� AND ���������һλ������С�	(A & B) ���õ� 12����Ϊ 0000 1100
	|	�����������һ�������У������� OR ���������һλ������С�	(A | B) ���õ� 61����Ϊ 0011 1101
	^	�������������һ���������е���ͬʱ�����������������У�������������������һλ������С�	(A ^ B) ���õ� 49����Ϊ 0011 0001
	~	�����Ʋ����������һԪ�����������"��ת"λЧ������0���1��1���0��	(~A ) ���õ� -61����Ϊ 1100 0011��һ���з��Ŷ��������Ĳ�����ʽ��
	<<	��������������������������ֵ�����ƶ��Ҳ�����ָ����λ����	A << 2 ���õ� 240����Ϊ 1111 0000
	>>	��������������������������ֵ�����ƶ��Ҳ�����ָ����λ����	A >> 2 ��
  */
}


// ��ֵ�����
void test65(){
   int a = 21;
   int c ;
 
   c =  a;
   cout << "Line 1 - =  �����ʵ����c ��ֵ = : " <<c<< endl ;
 
   c +=  a;
   cout << "Line 2 - += �����ʵ����c ��ֵ = : " <<c<< endl ;
 
   c -=  a;
   cout << "Line 3 - -= �����ʵ����c ��ֵ = : " <<c<< endl ;
 
   c *=  a;
   cout << "Line 4 - *= �����ʵ����c ��ֵ = : " <<c<< endl ;
 
   c /=  a;
   cout << "Line 5 - /= �����ʵ����c ��ֵ = : " <<c<< endl ;
 
   c  = 200;
   c %=  a;
   cout << "Line 6 - %= �����ʵ����c ��ֵ = : " <<c<< endl ;
 
   c <<=  2;
   cout << "Line 7 - <<= �����ʵ����c ��ֵ = : " <<c<< endl ;
 
   c >>=  2;
   cout << "Line 8 - >>= �����ʵ����c ��ֵ = : " <<c<< endl ;
 
   c &=  2;
   cout << "Line 9 - &= �����ʵ����c ��ֵ = : " <<c<< endl ;
 
   c ^=  2;
   cout << "Line 10 - ^= �����ʵ����c ��ֵ = : " <<c<< endl ;
 
   c |=  2;
   cout << "Line 11 - |= �����ʵ����c ��ֵ = : " <<c<< endl ;
}

// ��������� 
void test66(){
	
	/*
	
	&	ָ������� & ���ر����ĵ�ַ������ &a; ������������ʵ�ʵ�ַ��
	*	ָ������� * ָ��һ�����������磬*var; ��ָ����� var��
	
	sizeof	sizeof ��������ر����Ĵ�С�����磬sizeof(a) ������ 4������ a ��������
	Condition ? X : Y	�������������� Condition Ϊ�� ? ��ֵΪ X : ����ֵΪ Y��
	,	�����������˳��ִ��һϵ�����㡣�������ű��ʽ��ֵ���Զ��ŷָ����б��е����һ�����ʽ��ֵ��
	.���㣩�� ->����ͷ��	��Ա��������������ࡢ�ṹ�͹�����ĳ�Ա��
	Cast	ǿ��ת���������һ����������ת��Ϊ��һ���������͡����磬int(2.2000) ������ 2��	
	*/ 

} 
