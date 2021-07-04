//#include <iostream>
//
//using namespace std;
//
//class Father1
//{
//public:
//	int a;
//	int b;
//};
//
//class Father2
//{
//public:
//	int a;
//	int c;
//};
//
//// 多继承语法
//class Son : public Father1, public Father2
//{
//};
//
//void test()
//{
//	Son son;
//
//	// 多继承时，多个父类如果有重名成员，需要通过作用域指明
//	// son.a;
//
//	son.Father1::a;
//	son.Father2::a;
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}