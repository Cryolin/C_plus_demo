#include <iostream>

using namespace std;

// 发现是引用，转换为int* const ref = &a
void func(int& ref)
{
	// ref是引用，转换为*ref = 100
	ref = 100;
}

int main()
{
	int a = 10;

	// 发现是引用，自动转换为int* const ref = &a
	// ref指向的地址不可修改，也说明为什么引用不可修改
	int& ref = a;

	// ref是引用，自动转换为*ref = 20;
	ref = 20;

	system("pause");
	return 0;
}