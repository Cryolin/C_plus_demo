#include <iostream>

using namespace std;

//// 如下两个函数是可以重载的
//void func(int& a)
//{
//	cout << "func(int& a)" << endl;
//}
//
//void func(const int& a)
//{
//	cout << "func(const int& a)" << endl;
//}
//
//int main()
//{
//	int a = 10;
//
//	// 传入变量时，执行func(int& a)
//	func(a);
//
//	// 传入常量时，执行func(const int& a)
//	// 假如执行func(int& a)，int& a = 10是非法的
//	func(10);
//
//	// const常量，执行func(const int& a)
//	const int b = 20;
//	func(b);
//
//	system("pause");
//	return 0;
//}