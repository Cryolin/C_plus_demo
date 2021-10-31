// 预处理类型一：文件包含
// 尖括号，从配置路径找
#include <iostream>
// 双引号，从当前目录找，未找到则从配置路径找
#include "iostream"

using namespace std;

// 预处理类型二：宏定义
// 无参数宏
#define PI 3.14
#define M "abc"

// 有参数宏，注意不等同于函数
#define f(x) x*x + 3*x
// 可以通过分号执行多条语句，但不建议这么做
#define Sum(a,b,c) a=b*c; b=c*a; a=b*c

void testDefine()
{
	//PI：3.14
	//MyStr：abc
	//3 * f(2)18
	//a = 54
	//b = 18
	//c = 3
	cout << "PI：" << PI << endl;
	cout << "MyStr：" << M << endl; 

	// 如下代码只是做了替换，并不是值传递：3*2*2 + 3*2
	cout << "3 * f(2)" << 3 * f(2) << endl;

	int a = 1;
	int b = 2;
	int c = 3;
	Sum(a, b, c);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

int main()
{
	testDefine();


	system("pause");
}