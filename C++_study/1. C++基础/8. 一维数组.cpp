#include <iostream>
using namespace std;

//int main() {
//	// 一维数组的定义方式
//	// 数据类型 数组名[数组长度]
//	int arr1[5];
//
//	// 数据类型 数组名[数组长度] = {值1， 值2 ...}
//	int arr2[5] = { 0,1,2,3,4 };
//	int arr2[5] = { 0,1 };
//	int arr2[5] = {}; // 空白的会使用0填充
//
//	// 数据类型 数组名[] = {值1， 值2 ...}
//	int arr3[] = { 0,1,2,3,4 };
//
//	int arr[] = { 1, 2 };
//	cout << arr << endl; // 输出地址
//	char str[] = "hello";
//	cout << str << endl; // 输出 hello
//
//	// 获取数组长度的两种方法
//	cout << sizeof(arr) / sizeof(arr[0]) << endl;
//	cout << end(arr) - begin(arr) << endl;
//
//	// 初始值
//	int arr4[2];
//	cout << arr4[0] << endl; // 未初始化，打印地址
//
//	int arr5[2] = {};
//	cout << arr5[0] << endl; // 使用0填充，打印0
//	system("pause");
//	return 0;
//}