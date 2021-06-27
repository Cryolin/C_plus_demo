//#include <iostream>
//
//using namespace std;
//
//// 递增运算符重载（前置递增）
//// 目标：实现一个自定义的类封装int，每次递增2，并实现前置递增与后置递增
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger integer);
//	friend MyInteger& operator++(MyInteger& integer);
//public:
//	MyInteger(int integer)
//	{
//		this->integer = integer;
//	}
//
//	// 前置递增运算符重载01：使用成员函数
//	//MyInteger& operator++()
//	//{
//	//	integer += 2;
//	//	return *this;
//	//}
//private:
//	int integer;
//};
//
//// 前置递增运算符重载02：使用全局函数
//MyInteger& operator++(MyInteger& integer)
//{
//	integer.integer += 2;
//	return integer;
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
//	++(++integer);
//
//	// 打印14
//	cout << "integer : " << integer << endl;
//
//	system("pause");
//	return 0;
//}