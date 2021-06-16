#include <iostream>

using namespace std;

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	// 数据类型& 引用变量名 = 变量名
//	// 创建a的引用，命名为c，相当于给变量a创建了个别名c
//	int& c = a;
//	//int& c;	// 引用必须在定义时赋值，本行报错
//	
//	// 对引用的修改，会影响引用和原变量
//	c = 100;
//	cout << "a = " << a << endl;	// a = 100
//	cout << "c = " << c << endl;	// c = 100
//
//	// 引用被创建为a的别名后，就不能修改为b的别名
//	// 下面的代码是赋值，并非将c修改为b的引用
//	c = b;
//
//	system("pause");
//	return 0;
//}