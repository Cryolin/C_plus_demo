//#include <iostream>
//
//using namespace std;
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
//void test01(Person p)
//{
//}
//
//int main()
//{
//	Person p;
//	// 注意这里test01()是直接接收Person对象的（而不是通过引用）
//	// 相当于执行了Person p = p，这是之前讲过的隐式转换法调用构造函数
//	// 故在执行test01(p)时，调用了一次拷贝构造函数
//	test01(p);
//
//	system("pause");
//	return 0;
//}