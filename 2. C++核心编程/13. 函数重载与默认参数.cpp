#include <iostream>

using namespace std;

void func(int a)
{
	cout << "func(int a)" << endl;
}

void func(int a, int b = 10)
{
	cout << "func(int a, int b)" << endl;
}

int main()
{
	int a = 10;

	// 如下代码报错，因为编译器不知道选择哪个方法执行
	// 所以当有函数重载时，尽可能不要设置默认参数
	//func(10);

	system("pause");
	return 0;
}