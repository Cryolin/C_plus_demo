#include <iostream>
using namespace std;

//int main() {
//	// 一维数组的定义方式
//	// 数据类型 数组名[数组长度]
//	int arr1[5];
//
//	// 数据类型 数组名[数组长度] = {值1， 值2 ...}
//	int arr2[5] = { 0,1,2,3,4 };
//	int arr3[5] = { 0,1 };
//	int arr4[5] = {}; // 空白的会使用0填充
//
//	// 数据类型 数组名[] = {值1， 值2 ...}
//	int arr5[] = { 0,1,2,3,4 };
//
//	int arr6[] = { 1, 2 };
//	cout << arr6 << endl; // 输出地址
//	char str[] = "hello";
//	cout << str << endl; // 输出 hello
//
//	// 获取数组长度的两种方法
//	cout << sizeof(arr6) / sizeof(arr6[0]) << endl;
//	cout << end(arr6) - begin(arr6) << endl;
//
//	// 初始值
//	int arr7[2];
//	cout << arr7[0] << endl; // 未初始化，打印当前内存的内容（不可预估）
//
//	int arr8[2] = {};
//	cout << arr8[0] << endl; // 使用0填充，打印0
//	system("pause");
//	return 0;
//}