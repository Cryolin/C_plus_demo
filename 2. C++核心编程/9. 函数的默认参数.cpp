#include <iostream>

using namespace std;

//int addNum01(int a, int b, int c)
//{
//	return a + b + c;
//}
//
//// 可以给函数默认值，语法：
//// 函数返回值 函数名(参数 = 参数值)
//// 有默认值的传参需位于右方
//int addNum02(int a, int b = 30, int c = 30)
//{
//	return a + b + c;
//}
//
//// 如下代码报错，有默认值得传参需位于右方
////int addNum03(int a, int b = 30, int c)
////{
////	return a + b + c;
////}
//
//
//// 如下代码报错，函数的声明和定义只能有一处有默认值
//// 否则编译器不知道应选择哪个
////int addNum04(int a, int b = 30, int c = 30);
////int addNum04(int a, int b = 30, int c = 30)
////{
////	return a + b + c;
////}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	// 60
//	cout << "addNum01(a, b, c) = " << addNum01(a, b, c) << endl;
//
//	// 有默认值的部分可以缺省，如下返回70
//	cout << "addNum02(a) = " << addNum02(a) << endl;	
//
//	// 返回40
//	cout << "addNum02(a, 0) = " << addNum02(a, 0) << endl;
//
//	// 优先传入的值而非默认值，返回60
//	cout << "addNum02(a, b, c) = " << addNum02(a, b, c) << endl;
//
//	system("pause");
//	return 0;
//}