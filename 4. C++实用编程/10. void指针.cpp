//#include <iostream>
//using namespace std;
//
//// 如果函数的参数可以是任意类型指针，应该将其参数声明为 void*
//// 比较典型的函数有内存操作函数 memcpy 和 memset，如下面的代码所示：
//void* memset(void* buffer, int b, size_t size)
//{
//	char p[] = "abc";
//	return p;
//}
//
//int main(void)
//{
//	// 其他指针赋值给void指针无需强转
//	void* p1;
//	int a = 10;
//	int* p2 = &a;
//	p1 = p2;
//
//	// 报错,void指针赋值给别的指针需要强转
//	//p2 = p1;
//	p2 = (int*) p1;
//
//	// 避免对void指针做算数操作，如下代码报错
//	//p1++;
//
//	system("pause");
//	return 0;
//}