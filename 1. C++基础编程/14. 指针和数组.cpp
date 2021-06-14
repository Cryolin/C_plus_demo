#include <iostream>

using namespace std;
//
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	int* p = arr;
//	cout << *p << endl;		// arr[0]
//
//	// 注意指针的+1，是增加sizeof(指针类型)
//	// 例如这里增加了sizeof(4)，相当于把指针从arr[0]的首地址移动到尾地址
//	// 也就是arr[1]的首地址，通过p++,就可以访问到arr[1]了
//	p++;
//	cout << *p << endl;		// 再次解引用时，p已经指向了arr[1]
//
//	double arr2[5] = { 1.1,2.2,3.3,4.4,5.5 };
//	double* p2 = arr2;
//	cout << *p2 << endl;	// arr2[0]
//
//	// 同样的，对于double类型的指针，++操作相当于地址增加了sizeof(double)
//	// 相当于指针从arr2[0]的首地址移动到arr2[0]的尾地址
//	// 也就是arr2[1]的首地址，通过p2++，就可以访问到arr2[1]了
//	p2++;
//	cout << *p2 << endl;	// arr2[1]
//
//	system("pause");
//	return 0;
//}