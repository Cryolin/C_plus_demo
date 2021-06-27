//#include <iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		// this用法01,用于区分重名的形参与成员变量
//		this->age = age;
//	}
//
//	Person& addAge(int num)
//	{
//		age += num;
//		// this的用法02，用于链式调用
//		return *this;
//	}
//
//	int age;
//};
//
//int main() {
//	Person p(10);
//	cout << "p.age: " << p.age << endl;
//
//	p.addAge(2).addAge(2).addAge(2);
//	cout << "p.age: " << p.age << endl;
//
//	system("pause");
//	return 0;
//}