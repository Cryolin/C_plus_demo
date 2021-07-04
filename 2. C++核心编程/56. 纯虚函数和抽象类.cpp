//#include <iostream>
//
//using namespace std;
//
//class Animal
//{
//public:
//	// 纯虚函数语法，有纯虚函数的类是抽象类，无法实例化对象
//	virtual void speak() = 0;
//};
//
//class Dog : public Animal
//{
//public:
//	// 父类中存在纯虚函数，子类需重写，否则子类也是抽象类
//	void speak()
//	{
//		cout << "汪汪汪" << endl;
//	}
//};
//
//int main() {
//	// Animal是抽象类，无法实例化对象，如下代码报错
//	//Animal animal;
//
//	system("pause");
//	return 0;
//}