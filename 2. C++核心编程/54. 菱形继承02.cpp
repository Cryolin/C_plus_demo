//#include <iostream>
//
//using namespace std;
//
//class Father
//{
//public:
//	int a;
//};
//
//class Son1 : virtual public Father
//{
//};
//
//class Son2 : virtual public Father
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
//	// 采用虚继承后，不存在不明确的问题
//	gs.a = 10;
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}