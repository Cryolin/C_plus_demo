//#include <iostream>
//
//using namespace std;
//
//// 函数模板01
//template<typename T>
//void func()
//{
//	cout << sizeof(T) << endl;
//}
//
//// 函数模板02
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	// 函数模板的使用方式一：自动类型推导
//	mySwap(a, b);
//	// 函数模板的使用方式二：显示指定类型
//	mySwap<int>(a, b);
//
//	// 函数模板必须可以推导出T的数据类型，如下代码报错
//	//mySwap(a, c);
//	// 同样报错
//	//mySwap<char>(a, c);
//}
//
//void test02()
//{
//	func<char>();
//
//	// 函数模板在不确定时，无法执行，如下代码报错
//	//func();
//}
//
//int main() {
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}
