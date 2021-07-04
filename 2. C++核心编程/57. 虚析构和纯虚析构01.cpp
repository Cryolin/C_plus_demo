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
//	~Animal()
//	{
//		cout << "父类析构函数" << endl;
//	}
//
//	virtual void speak() = 0;
//};
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
//	// 父类中存在纯虚函数，子类需重写，否则子类也是抽象类
//	void speak()
//	{
//		cout << "汪汪汪" << endl;
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
//	animal->speak();
//	delete animal;
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}