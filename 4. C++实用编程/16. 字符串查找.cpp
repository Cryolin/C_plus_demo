//#include <iostream>
//using namespace std;
//
//char str1[] = "I'm Chinese";
//char str2[] = "nes";
//char str3[] = "abc";
//
//// 字符串查找
//void test01()
//{
//	char* pos = strstr(str1, str2);
//
//	// 返回子串在父串的第一次出现的指针位置
//	// 如下打印会从父串的指针位置打印到结尾'\0'
//	// nese
//	cout << pos << endl;
//
//	// 不包含时，返回NULL
//	char* pos2 = strstr(str1, str3);
//}
//
//// 返回子串在父串中第一次出现的index，通过指针相减实现
//int getSubStrIndex()
//{
//	char* pos = strstr(str1, str2);
//	return pos - str1;
//}
//
//int main()
//{
//	test01();
//
//	cout << getSubStrIndex() << endl;;
//
//	system("pause");
//}