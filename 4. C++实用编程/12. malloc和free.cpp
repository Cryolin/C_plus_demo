//#include <iostream>
//using namespace std;
//
//void test01()
//{
//	// 直接在栈区开辟大数组，报Stack Overflow，如下代码报错
//	//int arr[10 * 1024 * 1024];
//
//	// 通过malloc函数堆空间开辟内存，返回内存的首地址
//	// 返回值类型是void*，可以强转为任意指针
//	int* arr = (int*) malloc(10 * 1024 * 1024 * sizeof(int));
//
//	// 开辟完内存后，可以直接作为int数组写入
//	// 可能开辟失败，要判空
//	if (arr)	// 等效于 if (arr != NULL)
//	{
//		arr[0] = 1;
//		arr[1] = 2;
//	}
//
//	// 使用完后记得调用free释放内存空间
//	if (arr)
//	{
//		free(arr);
//		arr = NULL;
//	}
//
//	// 请注意，如下方式定义的int指针是不能作为数组使用的，未进行数组初始化
//	//int* arr2;
//	//arr2[1] = 10;
//
//	// 这样是可以的
//	int* arr3 = new int[10];
//	arr3[1] = 1;
//	delete[] arr3;
//}
//
//// 
//void test02()
//{
//	int a = 1;
//
//	// 变量不能直接用作数组初始化，如下代码报错
//	//int arr[a];
//
//	// 如果想通过变量初始化数组大小，可以使用new关键字在堆区创建
//	int* arr = new int[a];
//	arr[0] = 1;
//	delete[] arr;
//
//	// 当然，malloc也是可以的
//	int* arr2 = (int*)malloc(sizeof(int)*a);
//	if (arr2)
//	{
//		arr2[0] = 1;
//	}
//	// 使用完后记得调用free释放内存空间
//	if (arr2)
//	{
//		free(arr2);
//	}
//}
//
//int main(void)
//{
//	test01();
//
//	test02();
//
//	system("pause");
//	return 0;
//}