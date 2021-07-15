//#include <iostream>
//
//using namespace std;
//
//// 普通函数
//int add01(int a, int b)
//{
//	return a + b;
//}
//
//// 函数模板
//template<typename T>
//T add02(T a, T b)
//{
//	return a + b;
//}
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	
//	// 普通函数可发生隐式类型转换，char自动转换为int
//	add01(a, b);
//	add01(a, c);
//
//	add02(a, b);
//
//	// 使用函数模板时，如果使用自动类型推导，不会发生隐式类型转换
//	// 如下代码报错，因为编译器不知道T到底是int还是char
//	//add02(a, c);
//
//	// 使用函数模板时，如果显示指定类型，可以发生隐式类型转换
//	add02<int>(a, c);
//	add02<char>(a, c);
//
//	system("pause");
//	return 0;
//}