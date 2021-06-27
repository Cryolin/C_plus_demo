//#include <iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//	// 常函数，注意const的位置
//	void showName() const
//	{
//		// 常函数不可修改成员变量，如下代码报错
//		// age = 10;
//
//		// mutable关键字修饰的成员变量可以修改
//		name = "lilei";
//		cout << "name is " << name << endl;
//	}
//
//	void changeAge()
//	{
//		// 普通成员函数可以修改成员变量
//		// 一个类中，常函数与普通成员函数可以同时存在
//		age = 10;
//	}
//
//	mutable string name;
//	int age;
//};
//
//int main() {
//	Person p1 = Person();
//	p1.showName();
//	p1.changeAge();
//
//	// 创建对象时，前面加上const，表示这是一个常对象
//	const Person p2;
//	// 常对象只能调用常函数
//	p2.showName();
//	// 常对象不能调用非常函数，如下代码报错
//	// p2.changeAge();
//	// 常变量的内容不可以修改，如下代码报错
//	// p2.age = 10;
//	// 常对象可以修改mutable修饰的成员变量
//	p2.name = "hanmeimei";
//
//	// 常函数和常对象的本质：
//	// 普通对象的this：Person* const this
//	// 常对象的this：const Person* const this	作用范围，整个对象
//	// 常函数的this：const Person* const this   作用范围，仅常函数
//
//	system("pause");
//	return 0;
//}