#include <iostream>
 
// �������� 
void func1(void);
 
static int count = 10; /* ȫ�ֱ��� */
 
//int main()
//{
//    while(count--)
//    {
//       func1();
//    }
//    return 0;
//
//}
// ��������
void func1(void)
{

    std::cout << "�ֲ���̬���� " << count << std::endl;
}

/**
 * C++ �洢��
 * register �洢�� 
 * register �洢�����ڶ���洢�ڼĴ����ж����� RAM �еľֲ�����������ζ�ű��������ߴ���ڼĴ����Ĵ�С��ͨ����һ���ʣ����Ҳ��ܶ���Ӧ��һԪ�� '&' ���������Ϊ��û���ڴ�λ�ã���
 * 
 * static �洢��
 * static ���η�Ҳ����Ӧ����ȫ�ֱ���,�� static ����ȫ�ֱ���ʱ����ʹ���������������������������ļ���. ʹ�� static ���ξֲ����������ں�������֮�䱣�־ֲ�������ֵ
 * 
 * extern �洢��
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
  
