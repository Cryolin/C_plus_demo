#include <iostream>

using namespace std;

int main() {
	int a = 10;
	int b = 20;

	// const修饰int*，代表这个指针指向的值不能修改
	// 可以理解为*p不能修改
	const int* p1 = &a;
	//*p1 = 20;	// 报错，*p1不能修改
	a = 20;		// a本身还是可以修改的
	p1 = &b;	// p1的指针也是可以修改的

	// const修饰p，代表这个指针不能修改
	// 可以理解为p不能修改
	int* const p2 = &a;
	*p2 = 20;	// *p2可以修改
	//p2 = &b;	// 报错，p2不可修改

	// const同时修饰int*和p，代表指针以及指针指向的值都不可修改
	const int* const p3 = &a;
	//*p3 = 30;	// 报错，*p3不可修改
	//p3 = &b;	// 报错，p3不可修改

	system("pause");
	return 0;
}