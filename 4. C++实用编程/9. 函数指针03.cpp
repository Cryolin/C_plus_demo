//#include <iostream>
//using namespace std;
//
//struct student
//{
//	int (*max)(int, int);
//	string name;
//};
//
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//// 访问结构体中的函数指针
//void test01()
//{
//	student s1 = {};
//	s1.name = "str";
//	s1.max = Max;
//	int max = s1.max(10, 20);
//
//	cout << "s1.max(10,20) : " << max << endl;
//}
//
//// 访问结构体指针中的函数指针
//void test02()
//{
//	student s = {};
//	student* sp = &s;
//	sp->name = "zhangsan";
//	sp->max = Max;
//	int max = sp->max(10, 20);
//
//	cout << "s.max(10,20) : " << max << endl;
//}
//
//// 访问结构体引用中的函数指针
//void test03()
//{
//	student s = {};
//	student& s1 = s;
//	s1.name = "lisi";
//	s1.max = Max;
//	int max = s1.max(10, 20);
//
//	cout << "s1.max(10,20) : " << max << endl;
//}
//
//int main(void)
//{
//	//test01();
//
//	//test02();
//
//	test03();
//
//	system("pause");
//	return 0;
//}