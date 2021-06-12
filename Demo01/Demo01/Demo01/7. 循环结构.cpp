#include <iostream>
using namespace std;

//int main() {
//	cout << "三位数中，所有的水仙花数有：" << endl;
//	for (int num = 100; num < 1000; num++) {
//		int a = num % 10; // 个位
//		int b = (num / 10) % 10; // 十位
//		int c = num / 100; // 百位
//		int sum = a * a * a + b * b * b + c * c * c;
//		if (sum == num) {
//			cout << num << " 是水仙花数" << endl;
//		}
//	}
//
//	// C++中如下写法不会报错，根据就近原则，i是内存for循环的值。
//	for (int i = 0; i < 5; i++) {
//		for (int i = 10; i < 12; i++) {
//			cout << i << endl;
//		}
//	}
//
//	system("pause");
//	return 0;
//}