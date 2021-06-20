//#include <iostream>
//
//using namespace std;
//
//// 在C++中，函数的返回值是会重新创建一个的
//// 例如下面的test01(),test02(),test03()打印的地址都是不一样的
//struct structTest 
//{
//	int a;
//};
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person 默认构造函数" << endl;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person 拷贝构造函数" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person 析构函数" << endl;
//	}
//};
//
//structTest test01()
//{
//	structTest s1 = { 10 };
//	cout << "struct s1 的地址： " << (int)&s1 << endl;
//
//	return s1;
//}
//
//Person test02()
//{
//	Person p1;
//	cout << "Person p1 的地址： " << (int)&p1 << endl;
//
//	return p1;
//}
//
//int test03()
//{
//	int a = 1;
//	cout << "a 的地址： " << (int)&a << endl;
//	return a;
//}
//
//int main()
//{
//	//structTest s2 = test01();
//	//cout << "struct s2 的地址： " << (int)&s2 << endl;
//
//	Person p2 = test02();
//	cout << "Person p2 的地址： " << (int)&p2 << endl;
//
//	/*int b = test03();
//	cout << "b 的地址： " << (int)&b << endl;*/
//
//	system("pause");
//	return 0;
//}