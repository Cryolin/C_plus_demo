#include <iostream>

using namespace std;

class Clazz
{
	// class中的成员默认是private的
	int a;
};

struct struct_test
{
	// struct中的成员默认是public的
	int a;

	void func()
	{
		cout << "struct中可以定义函数" << endl;
	}

protected:
	int b;

private:
	int c;

	void func02()
	{
		cout << "struct中，可以给成员函数或者成员变量设置访问权限" << endl;
	}
};

int main()
{
	struct_test s1;
	s1.a = 10;
	s1.func();

	// struct也可以跟class一样，配置protected和private的成员
	// 如下两个成员变量或成员函数，因为不是public的，所以无法访问，报错
	//s1.b = 20;
	//s1.c = 30;
	//s1.func02();

	Clazz c1;
	// class中的成员默认是private的，如下代码报错
	//c1.a = 10;

	system("pause");
	return 0;
}