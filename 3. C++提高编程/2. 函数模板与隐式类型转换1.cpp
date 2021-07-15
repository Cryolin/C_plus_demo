//#include <iostream>
//
//using namespace std;
//
//// C++隐式类型转换的说明
//class Animal
//{
//public:
//	virtual void speak() = 0;
//};
//
//class Cat : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "miao miao" << endl;
//	}
//};
//
//// 隐式类型转换01：多态
//void test01(Animal& animal)
//{
//	animal.speak();
//}
//
//// 隐式类型转换02：编译器自动将数据进行了转换
//void test02(int i)
//{
//	cout << i << endl;
//
//	int a = 10;
//	double b = 1.0;
//	a + b; // int自动转化为double
//}
//
//int main() {
//
//	Cat cat;
//	test01(cat);
//
//	// 传参是char类型，自动转换为int类型
//	test02('c');
//
//	system("pause");
//	return 0;
//}
