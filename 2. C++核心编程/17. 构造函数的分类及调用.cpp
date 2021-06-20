//#include <iostream>
//
//using namespace std;
//
//// 1、构造函数的分类
//class Person
//{
//public:
//	// 无参构造（默认构造）
//	Person()
//	{
//		cout << "Person的无参构造函数打印" << endl;
//
//	}
//
//	// 有参构造
//	Person(int age)
//	{
//		cout << "Person的有参构造函数打印" << endl;
//		this->age = age;
//	}
//
//	Person(string name, int age)
//	{
//		cout << "Person的多参数构造函数打印" << endl;
//		this->name = name;
//		this->age = age;
//	}
//
//	// 拷贝构造函数
//	// 使用const引用，一般用于复制某个已有对象
//	Person(const Person& p)
//	{
//		cout << "Person的拷贝构造函数打印" << endl;
//		name = p.name;
//		age = p.age;
//	}
//
//	~Person()
//	{
//		cout << "Person的析构函数打印" << endl;
//	}
//
//private:
//	string name;
//	int age;
//};
//
//// 2、构造函数的调用
//void test()
//{
//	// 1、括号法，常用
//	Person p1;
//	Person p2(10);
//	Person p3("lilei", 18);
//	Person p4(p2);	// 括号法调用拷贝构造函数
//
//	// 注意1：调用无参构造方法不能加括号，编译器会认为是函数声明
//	// 下面写法会被认为是声明，并非无参构造函数
//	Person p5();
//
//	// 2、显示法
//	Person p6 = Person();
//	Person p7 = Person(10);
//	Person p8 = Person("hanmeimei", 16);
//	Person p9 = Person(p8);
//
//	// Person(10)单独写就是匿名对象，当前行结束之后，马上析构
//	// 例如下面两行的例子：
//	Person(19);
//	cout << "Person(19)匿名对象的析构函数会先于本行打印" << endl;
//
//	// 注意2：不能利用拷贝构造函数初始化匿名对象
//	// 如下代码会报错：Person p10重定义，原因在于Person(p10)编译器会认为是 Person p10;
//	Person p10 = Person(10);
//	Person(p10);
//
//	// 3、隐式转换法
//	Person p11 = {};
//	Person p12 = {10};
//	Person p13 = 10;	// 只有一个参数时，大括号可以省略
//	Person p14 = { "banana", 19 };
//	Person p15 = { p13 };
//	Person p16 = p13;
//}
//
//int main()
//{
//	test();
//
//	// return 0;执行之前，调用析构函数
//
//	system("pause");
//	return 0;
//}