#include <iostream> 
using namespace std;


/**
 * ���������ʾ���з����������޷�������֮��Ĳ�� 
 * ����,����(https://www.cnblogs.com/shamo89/p/9846385.html) 
 */ 
 
//int main(){
//       
//    short int i;          // �з��Ŷ����� 
//	short unsigned int j; // �޷��Ŷ����� 
//         	
//    j = 50000;
//	i = j;
//	
//	cout << i << " "  << j;
//	
//	return 0;	
//}

	// const  const���͵Ķ����ڳ���ִ���ڼ䲻�ܱ��޸ĸı�
	// volatile ���η�volatile ���߱���������Ҫ�Ż�volatile�����ı���, �ó������ֱ�Ӵ��ڴ��ж�ȡ����.
    //	        ����һ��ı�����������Ա��������Ż�,���ڴ��еı���ֵ���ڼĴ������Լӿ��дЧ�� 
    
    // restrict ��restrict���ε�ָ����Ψһһ�ַ�������ָ��Ķ���ķ�ʽ. ֻ��C99�������µ������޶��� restrict. 
    
    // ����,����
    
    /**
	    �����з��������ԣ�
	
	      (1)�����Ƶ����λ�Ƿ���λ��0��ʾ������1��ʾ����
	
	      (2)������ԭ�롢���롢���붼һ����
	
	      (3)�����ķ��� =  ����ԭ�����λ���䣬����λȡ����0 ->1 ; 1->0 ����
	
	      (4)�����Ĳ��� = ���ķ��� +1��
	
	      (5)0�ķ��롢���붼��0��
	
	      (6)�ڼ���������ʱ�򣬶����Բ���ķ�ʽ������ģ�
	*
	* 50000 ������->
	* ����,ԭ��,����,���붼һ�� 
	* ԭ��: 1100 0011 0101 0000 
	* ����: 1100 0011 0101 0000 
	* ����: 1100 0011 0101 0000 
	* 
	* ת�����з��Ŷ����� ��λ��ɷ���λ1�Ǹ��� 
	* ����-1 -> ���� 
	* 1100 0011 0100 1111
	* ���� -> ԭ�� 
	* 1011 1100 1011 0000 
	* ��λ�Ǹ��� 
	* 0011 1100 1011 0000  = 15536
	* ���Ϊ-15536 
	*/	 