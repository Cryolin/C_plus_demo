// 导入test.h
#include "test.h";

// test.h中，已经导入了iostream，所以此处无需重复导入
//#include <iostream>

// test.h中，已经使用了std的命名空间，无需重复声明
//using namespace std;

int main() {
	int a = 1;
	int b = 2;
	int c = test(a, b);
	cout << "main" << endl;
	system("pause");
	return 0;
}

// 所有导入test.h头文件的cpp文件，只能有一个test()函数的定义
// 下方如果重复定义会报错

//int test(int a, int b)
//{
//	cout << "main方法入口文件中，调用swap" << endl;
//	return;
//}