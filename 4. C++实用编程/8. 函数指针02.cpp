//#include <iostream>
//using namespace std;
//
//int Max(int, int);
//int main(void)
//{
//	// 定义一个函数指针
//	int(*p)(int, int);  
//	int a = 10;
//	int b = 20;
//
//	// 把函数Max赋给指针变量p, 使p指向Max函数
//	p = Max;
//
//	//通过函数指针调用Max函数，如下两种调用方法均可
//	int c = (*p)(a, b);
//	cout << "c = (*p)(a, b)  : " << c << endl;
//
//	int d = p(a, b);
//	cout << "d = p(a, b)  : " << d << endl;
//	system("pause");
//	return 0;
//}
//int Max(int x, int y)  //定义Max函数
//{
//	return x > y ? x : y;
//}