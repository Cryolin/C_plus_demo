//#include <iostream>
//using namespace std;
//
//class Father
//{
//public:
//	Father()
//	{
//		cout << "Father 无参构造函数" << endl;
//	}
//
//	Father(string name)
//	{
//		cout << "Father 有参构造函数" << endl;
//		this->name = name;
//	}
//
//	string name;
//};
//
//class Son : public Father
//{
//public:
//	// 调用父类构造函数
//	Son() : Father(), age(10)
//	{
//		cout << "Son 无参构造函数" << endl;
//	}
//
//	// 调用父类有参构造函数
//	Son(string name) : Father(name), age(10)
//	{
//		cout << "Son 有参构造函数" << endl;
//	}
//	int age;
//};
//
//void test()
//{
//	Son son;
//	Son son2("Tom");
//}
//
//int main()
//{
//	test();
//
//	system("pause");
//}