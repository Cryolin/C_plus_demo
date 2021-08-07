//#include <iostream>
//using namespace std;
//
//void testStrcmp()
//{
//	char str1[] = "abc";
//	char str2[] = "abc";
//	// 合法，打印 0
//	cout << strcmp(str1, str2) << endl;
//
//	// 合法，打印 -1
//	cout << strcmp("abc", "abcd") << endl;
//
//	// 合法，打印 1
//	cout << strcmp("ab", "aab") << endl;
//
//	string str3 = "abc";
//	// 不合法，报错，传参不能是string
//	//cout << strcmp(str3, str2) << endl;
//
//	// 可通过strcmp判断字符串是否相等
//	if (!strcmp(str1, str2))
//	{
//		cout << "字符串相等" << endl;
//	}
//	else
//	{
//		cout << "字符串不相等" << endl;
//	}
//}
//
//int main()
//{
//	testStrcmp();
//
//	system("pause");
//}