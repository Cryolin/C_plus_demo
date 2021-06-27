//#include <iostream>
//
//using namespace std;
//
//class Person1
//{
//};
//
//class Person2
//{
//public:
//	int age;
//	static string name;
//	void setAge()
//	{
//	}
//	static void setName()
//	{
//	}
//};
//
//int main() {
//
//	// 空的类对象，sizeof返回1
//	Person1 p1;
//	cout << "sizeof(p1): " << sizeof(p1) << endl;
//	
//	// 静态成员变量、静态成员函数、普通成员函数，都不在对象中
//	// sizeof仅包含普通成员变量，此处为int，sizeof(p2)返回4
//	Person2 p2;
//	cout << "sizeof(p2): " << sizeof(p2) << endl;
//
//	system("pause");
//	return 0;
//}