//#include <iostream>
//
//using namespace std;
//
//class Father
//{
//public:
//	Father()
//	{
//		age = 30;
//	}
//	void speak()
//	{
//		cout << "I'm father" << endl;
//	}
//
//	int age;
//};
//
//class Son : public Father
//{
//public:
//	Son()
//	{
//		age = 10;
//	}
//	void speak()
//	{
//		cout << "I'm son" << endl;
//	}
//	int age;
//};
//
//void test01()
//{
//	Son son;
//
//	son.age;
//	// 父类成员变量，通过类名::访问
//	son.Father::age;
//
//	son.speak();
//	// 父类成员函数，通过类名::访问
//	son.Father::speak();
//}
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}