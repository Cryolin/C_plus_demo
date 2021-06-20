//#include <iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//	int age;
//};
//
//class Book
//{
//public:
//	Book(string bookName)
//	{
//		this->bookName = bookName;
//	}
//private:
//	string bookName;
//};
//
//class Student
//{
//public:
//	Student(const Student& student)
//	{
//		name = student.name;
//	}
//private:
//	string name;
//};
//
//int main()
//{
//	int age = 10;
//
//	Person p1;	// 编译器默认创建无参构造函数
//	p1.age = 10;
//	Person p2(p1);	// 编译器会默认创建拷贝构造函数
//
//	string bookName = "Harry Potter";
//	Book book1 = bookName;
//	// Book book2;	// 如果主动定义了有参构造函数，那么编译器就不会帮我们定义默认的构造函数，左侧报错
//	Book book3 = {book1}; // 编译器还是会帮我们创建默认的拷贝构造函数的
//
//	//Student john;	// 同样的，如果主动定义了拷贝构造函数，那么编译器不会帮我们定义默认的构造函数，左侧报错
//
//	system("pause");
//	return 0;
//}