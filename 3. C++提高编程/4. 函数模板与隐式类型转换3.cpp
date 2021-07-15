//#include <iostream>
//
//using namespace std;
//
//class Animal
//{
//};
//
//class Cat : public Animal
//{
//};
//
//void test01(Animal& a, Animal& b)
//{
//}
//
//template<typename T>
//void test02(T& a, T& b)
//{
//}
//
//int main() {
//	Cat cat1;
//	Cat cat2;
//	Animal animal;
//
//	// 普通函数可以发生多态（隐式类型转换）
//	test01(cat1, cat2);
//	test01(cat1, animal);
//
//	test02(cat1, cat2);
//
//	// 使用函数模板时，如果使用自动类型推导，不会发生多态（隐式类型转换）
//	// 如下代码报错，编译器不知道T是Cat还是Animal
//	//test02(cat1, animal);
//
//	// 使用函数模板时，如果使用显示指定类型，可以发生多态（隐式类型转换）
//	test02<Animal>(cat1, animal);
//
//	system("pause");
//	return 0;
//}