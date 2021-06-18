//#include <iostream>
//
//using namespace std;
//
//// 定义一个类
//// 语法： class 类名{访问权限: 属性/行为};
//class Student
//{
//// 访问权限
//// public权限，类内部类外部均可访问
//public:
//	// C++中叫成员变量
//	string name;
//
//	// C++中叫成员函数
//	void introduceSelf()
//	{
//		cout << "我叫： " << name << endl;
//	}
//
//// protected访问权限，本类和子类可以访问
//protected:
//	string car;
//
//// private访问权限，仅本类可以访问
//private:
//	string password;
//};
//
//int main()
//{
//	// 实例化类无需new关键字
//	Student john;
//	john.name = "john";
//	john.introduceSelf();
//
//	//john.car = "benz"; // car是protected的成员，外部无法访问
//	//john.password = "123456";	// password是private的成员，外部无法访问
//
//	system("pause");
//	return 0;
//}