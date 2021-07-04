//#include <iostream>
//
//using namespace std;
//
//class Father
//{
//public:
//	static void speak()
//	{
//		cout << "I'm father" << endl;
//	}
//
//	static int age;
//};
//
//class Son : public Father
//{
//public:
//	static void speak()
//	{
//		cout << "I'm son" << endl;
//	}
//	static int age;
//};
//
//int Father::age = 30;
//int Son::age = 10;
//
//void test01()
//{
//	Son son;
//
//	son.age;
//	// 访问父类静态成员变量
//	// 通过对象访问
//	son.Father::age;
//	// 通过类名访问
//	Son::Father::age;
//
//	son.speak();
//	// 访问父类静态成员函数
//	// 通过对象访问
//	son.Father::speak();
//	// 通过类名访问
//	Son::Father::speak();
//}
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}