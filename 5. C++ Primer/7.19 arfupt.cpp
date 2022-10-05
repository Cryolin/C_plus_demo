//#include <iostream>
//using namespace std;
//// 如下三个函数签名相同
//const double* f1(const double ar[], int n);
//const double* f2(const double[], int);
//const double* f3(const double*, int);
//
//int main()
//{
//	double av[3] = { 1112.3, 1542.6, 2227.9 };
//	
//	// 函数指针，可以定义时赋值
//	const double* (*p1)(const double*, int) = f1;
//
//	// C++11引入的自动类型转换
//	auto p2 = f2;
//	// 实际等效于：
//	// const double* (*p2)(const double*, int) = f2;
//
//	cout << "Using pointers to functions:\n";
//	cout << "Address Value\n";
//	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
//	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;
// 
//	// 函数指针的数组，pa指向数组首地址
//	// 初始化列表的方式，不能用auto
//	const double* (*pa[3])(const double*, int) = { f1, f2, f3 };
//	// 但如下直接赋值的方式支持auto
//	auto pb = pa;
//	// 上述auto实际等效于
//	// const double* (**pb)(const double*, int) = pa;
//
//	cout << "Using an array of pointers to functions:\n";
//	cout << "Address Value\n";
//	for (int i = 0; i < 3; i++)
//	{
//		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
//	}
//
//	cout << "Using a pointer to a pointer to a function:\n";
//	cout << "Address Value\n";
//	for (int i = 0; i < 3; i++)
//	{
//		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
//	}
//
//	// 指向函数数组的指针
//	cout << "Using pointers to an array of pointers:\n";
//	cout << "Address Value\n";
//	auto pc = &pa;
//	// 等效于
//	//const double* (*(*pc)[3])(const double*, int) = &pa;
//	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
//
//	const double* (*(*pd)[3])(const double*, int) = &pa;
//
//	const double* pdb = (*pd)[1](av, 3);
//	cout << pdb << ": " << *pdb << endl;
//
//	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;
//
//	system("pause");
//	return 0;
//}
//
//const double* f1(const double* ar, int n)
//{
//	return ar;
//}
//
//const double* f2(const double* ar, int n)
//{
//	return ar + 1;
//}
//
//const double* f3(const double* ar, int n)
//{
//	return ar + 2;
//}
