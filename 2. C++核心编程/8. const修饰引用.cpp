#include <iostream>

using namespace std;

//void printValue(const int& a)
//{
//	// 与const修饰指针一样，对于不想被函数修改的引用，作为传参时
//	// 可以通过const修饰避免修改，如下代码报错
//	//a = 1000;
//
//	cout << "a = " << a << endl;
//}
//
//int main()
//{
//	int a = 10;
//
//	// 引用无法直接指向数值，如下代码报错
//	// int& b = 10;
//
//	// 但被const修饰的引用可以直接指向数值
//	// 如下代码实际上相当于指向了一个临时变量：
//	// int temp = 10;
//	// const int& b = temp;
//	const int& b = 10;
//
//	printValue(a);
//
//	system("pause");
//	return 0;
//}