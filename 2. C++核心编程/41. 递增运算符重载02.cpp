//#include <iostream>
//
//using namespace std;
//
//// 递增运算符重载（后置递增）
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger integer);
//	friend MyInteger operator++(MyInteger& integer, int);
//public:
//	MyInteger(int integer)
//	{
//		this->integer = integer;
//	}
//
//	// 后置递增运算符重载01：使用成员函数
//	// 注意返回值，后置递增需要返回一个临时的值，故不能用引用或指针
//	// 编译器通过占位参数判断是后置递增，且只能传int
//	//MyInteger operator++(int)
//	//{
//	//	MyInteger temp(integer);
//	//	integer += 2;
//	//	return temp;
//	//}
//private:
//	int integer;
//};
//
//// 后置递增运算符重载02：使用全局函数
//MyInteger operator++(MyInteger& integer, int)
//{
//	MyInteger temp(integer.integer);
//	integer.integer += 2;
//	return temp;
//}
//
//ostream& operator<<(ostream& cout, MyInteger integer)
//{
//	cout << integer.integer;
//	return cout;
//}
//
//int main() {
//	MyInteger integer(10);
//
//	// 打印10
//	cout << "integer : " << integer++ << endl;
//	// 打印12
//	cout << "integer : " << integer++ << endl;
//
//	system("pause");
//	return 0;
//}