//#include <iostream>
//using namespace std;
//
//void add(int num1, int num2) {
//	printf("num1 + num2 = %d\n", (num1 + num2));
//}
//
//void mins(int num1, int num2) {
//	printf("num1 - num2 = %d\n", (num1 - num2));
//}
//// 函数指针作为函数传参
//void opreate(void(*method)(int, int), int num1, int num2) {
//	// method(num1, num2);也是可以的
//	(*method)(num1, num2);
//}
//void main() {
//
//	// add(1,2);
//	opreate(add, 1, 2);
//	opreate(mins, 1, 2);
//
//	system("pause");
//}