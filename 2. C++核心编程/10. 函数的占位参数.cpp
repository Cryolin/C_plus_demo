#include <iostream>

using namespace std;

//// 占位参数，只有数据类型，无变量名
//void printNum(int a, int)
//{
//	cout << "a = " << a  << " in printNum() " << endl;
//}
//
//// 占位参数也可以有默认参数
//void printNum02(int a, int = 10)
//{
//	cout << "a = " << a << " in printNum02" << endl;
//}
//
//int main()
//{
//	int a = 10;
//
//	// 传参时，占位参数也必须传值
//	printNum(a, 10);
//	// 如下代码，不给占位参数传值，报错
//	//printNum(a);
//
//	// 对于有默认参数的占位参数，可以不给占位参数传值
//	printNum02(a);
//
//	system("pause");
//	return 0;
//}