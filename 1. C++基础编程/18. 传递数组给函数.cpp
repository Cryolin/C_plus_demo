//#include <iostream>
//using namespace std;
//
//// 1、指针接收
//void func1(int* arr)
//{
//	cout << arr << endl;
//}
//
//// 2、未定义大小的数组接收
//void func2(int arr[])
//{
//	cout << arr << endl;
//}
//
//// 3、定义大小的数组接收
//// 就函数而言，数组的长度是无关紧要的，因为 C++ 不会对形式参数执行边界检查。
//void func3(int arr[10])
//{
//	cout << arr << endl;
//}
//
//int main() {
//
//	int arr[2] = {};
//
//	func1(arr);	// 000000972C92F758
//	func2(arr);	// 000000972C92F758
//	func3(arr);	// 000000972C92F758
//	
//	system("pause");
//	return 0;
//}