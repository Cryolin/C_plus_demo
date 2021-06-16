#include <iostream>

using namespace std;

//// 直接传入，无法修改
//void swap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//// 通过指针，可以修改
//void swap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//// 通过引用，可以修改
//void swap03(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//swap01(a, b);
//	//swap02(&a, &b);
//	swap03(a, b);
//	
//	cout << "a = " << a << endl;	// a = 100
//	cout << "b = " << b << endl;	// c = 100
//
//
//	system("pause");
//	return 0;
//}