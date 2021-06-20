//#include <iostream>
//
//using namespace std;
//
//// 类对象作为类成员时，初始化阶段默认调用空参构造函数
//class Phone
//{
//public:
//	Phone() 
//	{
//		cout << "Phone默认构造函数" << endl;
//	}
//	string phoneName;
//};
//
//class Person
//{
//public:
//	string name;
//	Phone phone;
//};
//
//int main()
//{
//	Person p1;
//	cout << "p1.name " << p1.name << "  ." << endl;
//	cout << "p1.phone.phoneName " << p1.phone.phoneName << "  ." << endl;
//
//	system("pause");
//	return 0;
//}