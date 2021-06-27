//#include <iostream>
//
//using namespace std;
//
//// 赋值运算符重载：解决浅拷贝问题
//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = new int(age);
//	}
//
//	~Person()
//	{
//		if (age != NULL)
//		{
//			delete age;
//			age = NULL;
//		}
//	}
//
//	// 赋值运算符重载01：使用成员函数
//	Person& operator=(Person& p)
//	{
//		// 深拷贝
//		age = new int(*p.age);
//		return *this;
//	}
//
//	int* age;
//};
//
//// 赋值运算符重载必须为成员函数，不能是全局函数
//// 如下代码报错
////Person& operator=(Person& p1, Person& p2)
////{
////}
//
//int main() {
//	Person p1(10);
//	Person p2(20);
//
//	// 赋值操作，执行时报异常
//	p2 = p1;
//
//	system("pause");
//	return 0;
//}