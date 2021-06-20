//#include <iostream>
//
//using namespace std;
//
//class Phone
//{
//public:
//	Phone(string phoneName)
//	{
//		cout << "Phone构造函数" << endl;
//		this->phoneName = phoneName;
//	}
//
//	Phone(string phoneName, int phoneAge)
//	{
//		cout << "Phone构造函数" << endl;
//		this->phoneName = phoneName;
//		this->phoneAge = phoneAge;
//	}
//
//	~Phone()
//	{
//		cout << "Phone析构函数" << endl;
//	}
//
//	string phoneName;
//	int phoneAge;
//};
//
//class Person
//{
//public:
//	// 普通的写法，直接把Phone对象传过来
//	// 但这种写法必须手动创建一个Phone对象传进来才行
//	Person(string name, Phone phone) :name(name), phone(phone) {}
//
//	// 下面的写法可以不手动创建一个Phone对象
//	// 利用初始化列表，初始化Phone对象
//	// phone(phoneName)相当于执行了如下代码：即是一次隐式转换法创建对象的过程
//	// phone = phoneName
//	Person(string name, string phoneName) :name(name), phone(phoneName) 
//	{
//		cout << "Person构造函数" << endl;
//	}
//
//	// 初始化块也可以传入多个参数，相当于：
//	// phone = {phoneName, phoneAge}
//	Person(string name, string phoneName, int phoneAge) :name(name), phone(phoneName, phoneAge) 
//	{
//		cout << "Person构造函数" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person析构函数" << endl;
//	}
//
//	Phone phone;
//	string name;
//};
//
//void test()
//{
//	Person p1("john", "HuaWei");
//	cout << p1.name << "\t购买了\t" << p1.phone.phoneName << "手机" << endl;
//
//	Person p2("Tom", "XiaoMi", 2);
//	cout << p2.name << "\t购买了\t" << p2.phone.phoneName << "手机, 已经使用了\t" << p2.phone.phoneAge << "年了" << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}