//#include <iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//	// 语法： 类名(){}
//	// 空参构造函数（默认构造函数）
//	// 可以重载
//	// 访问修饰符改为protected或private后，无法通过空参构造创建
//	Person()
//	{
//		cout << "Person的构造函数打印" << endl;
//	}
//
//	// 语法： ~类名(){}
//	// 空参西沟函数
//	// 不可以重载
//	// 必须配置成public的，否则无法访问，无法销毁
//	~Person()
//	{
//		cout << "Person的析构函数打印" << endl;
//	}
//};
//
//void test()
//{
//	// 局部变量，在创建完成之后，会调用析构函数
//	Person p1;
//}
//
//int main()
//{
//	test();
//	
//	// return 0;执行之前，调用析构函数
//	Person p2;
//
//	system("pause");
//	return 0;
//}