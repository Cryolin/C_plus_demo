#include <iostream>

using namespace std;

//// 不要直接返回局部变量的引用
//// 编译器会清理其内存
//int& test01()
//{
//	int a = 10;
//	return a;
//}
//
//int& test02()
//{
//	static int a = 10;
//	return a;
//}
//
//int test03()
//{
//	return 10;
//}
//
//int main()
//{
//	int& a = test01();
//	cout << "a = " << a << endl;	// a = 10
//	cout << "a = " << a << endl;	// 内存被清理
//
//	int& b = test02();
//	cout << "b = " << b << endl;	// a = 10
//	cout << "b = " << b << endl;	// a = 10
//
//	// 当函数的返回值是引用时，可以作为左值
//	test02() = 1000;
//	cout << "test02() = " << test02() << endl;
//	cout << "b = " << b << endl;
//
//	// 返回值不是引用的函数无法作为左值
//	// test03() = 1000;
//
//	system("pause");
//	return 0;
//}