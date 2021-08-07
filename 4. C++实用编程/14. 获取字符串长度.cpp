//#include <iostream>
//using namespace std;
//
//int getLength(char* str)
//{
//	// 如下方式不对，sizeof(str)的值不准确
//	//return sizeof(str) / sizeof(str[0]);
//
//	// 正确的返回字符串长度的方法：循环读取char，直到读到\0
//	int length = 0;
//	while (*str != '\0')
//	{
//		length++;
//		str++;
//	}
//	return length;
//}
//
//int main()
//{
//	char str1[] = "abc";
//	char str2[] = { 'a','b','c','\0' };
//
//	// 字符串以\0标识结尾，str1等价于str2，strlen均返回3
//	cout << "str1的长度 ： " << strlen(str1) << endl;
//	cout << "str2的长度 ： " << strlen(str2) << endl;
//
//	// 但如果采用数组长度的计算方法，计算出来的结果为4,
//	// 所以针对char数组形式的字符串，不要用此方法计算长度
//	cout << "str1的长度 ： " << sizeof(str1) / sizeof(str1[0]) << endl;
//	cout << "str2的长度 ： " << sizeof(str1) / sizeof(str1[0]) << endl;
//
//	// 如果把char数组指针传到函数，是计算不出
//	cout << "字符串长度： " << getLength(str1) << endl;
//
//	system("pause");
//}