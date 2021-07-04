//#include <iostream>
//
//using namespace std;
//
//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "动物叫" << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "汪汪汪" << endl;
//	}
//};
//
//// 多态条件：父类引用接收子类对象
//void test(Animal& animal)
//{
//	animal.speak();
//}
//
//// 多态条件：父类指针接收子类对象
//void test(Animal* animal)
//{
//	animal->speak();
//}
//
//int main() {
//	Dog dog;
//	test(dog);
//	test(&dog);
//
//	system("pause");
//	return 0;
//}