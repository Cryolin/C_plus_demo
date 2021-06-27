//#include <iostream>
//
//using namespace std;
//
//// 左移运算符重载
//// 目标：通过cout << 将Person类的name成员变量打印到控制台
//class Person
//{
//	friend ostream& operator<<(ostream& out, Person p);
//public:
//	Person(string name)
//	{
//		this->name = name;
//	}
//
//	// 成员函数的方式，只能实现 p << cout，无法实现 cout << p
//	//ostream& operator<<(ostream& out)
//	//{
//	//	out << name;
//	//	return out;
//	//}
//
//private:
//	string name;
//};
//
//// 注意返回值，这里返回同一个out对象，使用引用
//ostream& operator<<(ostream& out, Person p)
//{
//	out << p.name;
//	return out;
//}
//
//int main() {
//	Person p("lilei");
//	cout << p << endl;
//
//	system("pause");
//	return 0;
//}