//#include <iostream>
//
//using namespace std;
//
//class Father
//{
//public:
//    int a;
//};
//
//class Son1 : public Father
//{
//};
//
//class Son2 : public Father
//{
//};
//
//class GrandSon : public Son1, public Son2
//{
//};
//
//void test()
//{
//	GrandSon gs;
//	// 菱形继承，子类继承了两份数据，如下代码报错
//	//gs.a = 10;
//
//	// 必须显示地指明是哪个父类的数据，但实际上不需要两份
//	gs.Son1::a = 10;
//	gs.Son2::a = 20;
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}