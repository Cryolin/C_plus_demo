//#include <iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//	//// 传统初始化方法
//	//Person(int a, int b, int c)
//	//{
//	//	this->a = a;
//	//	this->b = b;
//	//	this->c = c;
//	//}
//
//	// 通过初始化列表
//	Person(int a, int b, int c) : a(a), b(b), c(c)
//	{
//		cout << "执行其他逻辑" << endl;
//		// this->a = 30;	// 这里可以覆盖前面的初始化结果
//	}
//	
//	// 可以只针对部分变量进行初始化
//	Person(int a, int b) : a(a), b(b) {}
//
//	// 也可以这么初始化，但只能传固定值
//	Person() :a(10), b(20), c(30) {};
//	int a;
//	int b;
//	int c;
//};
//
//int main()
//{
//	Person p1 = Person(10, 20, 30);
//
//	Person p2 = Person(10, 20);
//	// c未初始化，打印结果：p2.c-858993460
//	cout << "p2.c" << p2.c << endl;	
//
//	system("pause");
//	return 0;
//}