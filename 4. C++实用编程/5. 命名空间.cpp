//#include <iostream>
//using namespace std;
//
//namespace A
//{
//	// 变量
//	int num;
//	// 结构体
//	struct student
//	{
//		string name;
//		int age;
//	};
//	// 类
//	class Teacher
//	{
//	public :
//		Teacher(string name, int age)
//		{
//			this->name = name;
//			this->age = age;
//		}
//	private:
//		string name;
//		int age;
//	};
//	void func()
//	{
//		cout << "method func in namespace A" << endl;
//	}
//
//	enum SEASON
//	{
//		SPRING, SUMMER, AUTUMN, WINTER
//	};
//
//	// namespace可以嵌套
//	namespace A_inner
//	{
//		int level;
//	}
//}
//
//namespace B
//{
//	// 变量
//	int num;
//	// 结构体
//	struct student
//	{
//		string name;
//		int age;
//	};
//	// 类
//	class Teacher
//	{
//	public:
//		Teacher(string name, int age)
//		{
//			this->name = name;
//			this->age = age;
//		}
//	private:
//		string name;
//		int age;
//	};
//	void func()
//	{
//		cout << "method func in namespace B" << endl;
//	}
//
//	// namespace可以嵌套
//	namespace A_inner
//	{
//		int level;
//	}
//}
//
//// 使用命名空间，可以使用多个
//using namespace A;
//using namespace B;
//
//int main()
//{
//	// 报错，不清楚是A的还是B的
//	//func();
//
//	// 不报错，SEASON是命名空间A特有的
//	SEASON;
//
//	// 通过作用域运算符找到指定命名空间的变量
//	A::A_inner::level = 10;
//
//	system("pause");
//}