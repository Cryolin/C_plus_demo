//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// 1. 通过aoti将字符串强转为int
//	char str1[] = "12";
//	cout << atoi(str1) << endl;	//12
//
//	char str2[] = "12xxx";
//	cout << atoi(str2) << endl;	//12
//
//	char str3[] = "xxx12xxx";
//	cout << atoi(str3) << endl;	//0		无法转换，返回默认值0
//
//	// 2. 通过aotf将字符串强转为float
//	char str4[] = "12.5";
//	cout << atof(str4) << endl;	//12.5
//
//	char str5[] = "12.5xxx";
//	cout << atof(str5) << endl;	//12.5
//
//	char str6[] = "xxx12.5xxx";
//	cout << atof(str6) << endl;	//0		无法转换，返回默认值0
//
//	system("pause");
//}