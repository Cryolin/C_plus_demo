//#include <iostream>
//
//using namespace std;
//
//// 先看一个类的成员变量是指针的例子
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->age = &age;
//	}
//
//	~Person()
//	{
//	}
//
//	string name;
//	int* age;
//};
//
//void test()
//{
//	Person p1 = { "john", 18 };
//	Person p2 = p1;
//	p1.name = "xixi";
//	*p1.age = 20;
//
//	cout << "p1的名字：" << p1.name << " p1的年龄：" << *p1.age << endl;
//	cout << "p2的名字：" << p2.name << " p2的年龄：" << *p2.age << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}