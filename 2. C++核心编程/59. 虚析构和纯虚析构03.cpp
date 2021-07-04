//#include <iostream>
//
//using namespace std;
//
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "父类构造函数" << endl;
//	}
//
//	// 纯虚析构
//	virtual ~Animal() = 0;
//};
//
//// 纯虚析构函数必须在外面定义，不能等到子类再定义，如下代码是必要的
//Animal::~Animal() {}
//
//class Dog : public Animal
//{
//public:
//	Dog()
//	{
//		cout << "子类构造函数" << endl;
//		name = new string("Jack");
//	}
//
//	~Dog()
//	{
//		cout << "子类析构函数" << endl;
//		if (name != NULL)
//		{
//			delete name;
//			name = NULL;
//		}
//	}
//	string* name;
//};
//
//void test()
//{
//	Animal* animal = new Dog();
//	delete animal;
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}