//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	// 在重载了有参构造函数后，一般情况下编译器会删除默认构造函数
//	// 可通过 = default 告诉编译器需要生成默认构造函数
//	Person() = default;
//
//	// 不想让对应的函数被调用时，可以通过 = delete 实现
//	Person(int age) = delete;
//
//	void speak() = delete;
//};
//
//int main()
//{
//	Person p;
//
//	// 报错
//	//Person p(10);
//
//	// 报错
//	//p.speak();
//
//	system("pause");
//}