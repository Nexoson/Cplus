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
	cout << "Line 1 - c 的值是 " << c << endl; 
	c = a - b;
    cout << "Line 2 - c 的值是 " << c << endl ;
    c = a * b;
    cout << "Line 3 - c 的值是 " << c << endl ;
    c = a / b;
    cout << "Line 4 - c 的值是 " << c << endl ;
    c = a % b;
    cout << "Line 5 - c 的值是 " << c << endl ;
    
    int d = 10; // 测试自增, 自减
	c = d++;
	cout << "Line 6 - c 的值是 " << c << endl;
	d = 10;    // 重新赋值
    c = d--;
    cout << "Line 7 - c 的值是 " << c << endl;
}

void test62(){
	   int a = 21;
	   int b = 10;
	   int c ;
 
	   if( a == b )
	   {
	      cout << "Line 1 - a 等于 b" << endl ;
	   }
	   else
	   {
	      cout << "Line 1 - a 不等于 b" << endl ;
	   }
	   if ( a < b )
	   {
	      cout << "Line 2 - a 小于 b" << endl ;
	   }
	   else
	   {
	      cout << "Line 2 - a 不小于 b" << endl ;
	   }
	   if ( a > b )
	   {
	      cout << "Line 3 - a 大于 b" << endl ;
	   }
	   else
	   {
	      cout << "Line 3 - a 不大于 b" << endl ;
	   }
	   /* 改变 a 和 b 的值 */
	   a = 5;
	   b = 20;
	   if ( a <= b )
	   {
	      cout << "Line 4 - a 小于或等于 b" << endl ;
	   }
	   if ( b >= a )
	   {
	      cout << "Line 5 - b 大于或等于 a" << endl ;
	   }
	
}

// 逻辑运算符
void test63(){
	   int a = 5;
   int b = 20;
   int c ;
 
   if ( a && b )
   {
      cout << "Line 1 - 条件为真"<< endl ;
   }
   if ( a || b )
   {
      cout << "Line 2 - 条件为真"<< endl ;
   }
   /* 改变 a 和 b 的值 */
   a = 0;
   b = 10;
   if ( a && b )
   {
      cout << "Line 3 - 条件为真"<< endl ;
   }
   else
   {
      cout << "Line 4 - 条件不为真"<< endl ;
   }
   if ( !(a && b) )
   {
      cout << "Line 5 - 条件为真"<< endl ;
   }
	
}

// 位运算符
void test64(){
	
   unsigned int a = 60;      // 60 = 0011 1100  
   unsigned int b = 13;      // 13 = 0000 1101
   int c = 0;           
 
   c = a & b;             // 12 = 0000 1100
   cout << "Line 1 - c 的值是 " << c << endl ;
 
   c = a | b;             // 61 = 0011 1101
   cout << "Line 2 - c 的值是 " << c << endl ;
 
   c = a ^ b;             // 49 = 0011 0001
   cout << "Line 3 - c 的值是 " << c << endl ;
 
   c = ~a;                // -61 = 1100 0011
   cout << "Line 4 - c 的值是 " << c << endl ;
 
   c = a << 2;            // 240 = 1111 0000
   cout << "Line 5 - c 的值是 " << c << endl ;
 
   c = a >> 2;            // 15 = 0000 1111
   cout << "Line 6 - c 的值是 " << c << endl ;

  /*
    &	如果同时存在于两个操作数中，二进制 AND 运算符复制一位到结果中。	(A & B) 将得到 12，即为 0000 1100
	|	如果存在于任一操作数中，二进制 OR 运算符复制一位到结果中。	(A | B) 将得到 61，即为 0011 1101
	^	如果存在于其中一个操作数中但不同时存在于两个操作数中，二进制异或运算符复制一位到结果中。	(A ^ B) 将得到 49，即为 0011 0001
	~	二进制补码运算符是一元运算符，具有"翻转"位效果，即0变成1，1变成0。	(~A ) 将得到 -61，即为 1100 0011，一个有符号二进制数的补码形式。
	<<	二进制左移运算符。左操作数的值向左移动右操作数指定的位数。	A << 2 将得到 240，即为 1111 0000
	>>	二进制右移运算符。左操作数的值向右移动右操作数指定的位数。	A >> 2 将
  */
}


// 赋值运算符
void test65(){
   int a = 21;
   int c ;
 
   c =  a;
   cout << "Line 1 - =  运算符实例，c 的值 = : " <<c<< endl ;
 
   c +=  a;
   cout << "Line 2 - += 运算符实例，c 的值 = : " <<c<< endl ;
 
   c -=  a;
   cout << "Line 3 - -= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c *=  a;
   cout << "Line 4 - *= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c /=  a;
   cout << "Line 5 - /= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c  = 200;
   c %=  a;
   cout << "Line 6 - %= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c <<=  2;
   cout << "Line 7 - <<= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c >>=  2;
   cout << "Line 8 - >>= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c &=  2;
   cout << "Line 9 - &= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c ^=  2;
   cout << "Line 10 - ^= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c |=  2;
   cout << "Line 11 - |= 运算符实例，c 的值 = : " <<c<< endl ;
}

// 杂项运算符 
void test66(){
	
	/*
	
	&	指针运算符 & 返回变量的地址。例如 &a; 将给出变量的实际地址。
	*	指针运算符 * 指向一个变量。例如，*var; 将指向变量 var。
	
	sizeof	sizeof 运算符返回变量的大小。例如，sizeof(a) 将返回 4，其中 a 是整数。
	Condition ? X : Y	条件运算符。如果 Condition 为真 ? 则值为 X : 否则值为 Y。
	,	逗号运算符会顺序执行一系列运算。整个逗号表达式的值是以逗号分隔的列表中的最后一个表达式的值。
	.（点）和 ->（箭头）	成员运算符用于引用类、结构和共用体的成员。
	Cast	强制转换运算符把一种数据类型转换为另一种数据类型。例如，int(2.2000) 将返回 2。	
	*/ 

} 
