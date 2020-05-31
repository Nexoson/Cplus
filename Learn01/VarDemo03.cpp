#include <iostream> 
using namespace std;

int main(){
	
// 下面列举几个整数常量的实例:
//	212         // 合法的
//	215u        // 合法的
//	0xFeeL      // 合法的
//	078         // 非法的：8 不是八进制的数字
//	032UU       // 非法的：不能重复后缀
	
	
	
// 各种类型的整数常量的实例:
//	85         // 十进制
//	0213       // 八进制 
//	0x4b       // 十六进制 
//	30         // 整数 
//	30u        // 无符号整数 
//	30l        // 长整数 
//	30ul       // 无符号长整数	


// 浮点常量
//	3.14159       // 合法的 
//	314159E-5L    // 合法的 
//	510E          // 非法的：不完整的指数
//	210f          // 非法的：没有小数或指数
//	.e55          // 非法的：缺少整数或分数



// 字符串常量

//	"hello, dear"
//	"hello, \
//	dear"
//	"hello, " "d" "ear" 


	cout << 0xFeeL << endl;
	cout << 0x00a0 << endl;
	cout << 0x000b << endl;
	cout << 0x000c << endl;
	cout << 0x000F << endl;
	cout << 0x000L << endl;
	return 0;
	
}
