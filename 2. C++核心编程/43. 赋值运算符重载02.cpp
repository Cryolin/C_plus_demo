//#include <iostream>
//
//using namespace std;
//
//// 赋值运算符重载：浅拷贝问题
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
//	int* age;
//};
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