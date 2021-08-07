//#include <iostream>
//using namespace std;
//
//void test01()
//{
//	int num_old = 2;
//	int* arr_old = (int*)malloc(sizeof(int) * num_old);
//	if (arr_old)
//	{
//		for (int i = 0; i < num_old; i++)
//		{
//			arr_old[i] = i;
//		}
//	}
//	cout << "old 首地址： " << arr_old << endl;
//
//	int num_new = 3;
//	int* arr_new = (int*)realloc(arr_old, sizeof(int) * num_new);
//	if (arr_new)
//	{
//		// old的部分会被直接copy过来，没有必要从0重新赋值了
//		for (int i = num_old; i < num_new; i++)
//		{
//			arr_new[i] = i;
//		}
//	}
//	cout << "new 首地址： " << arr_new << endl;
//	// old首地址与new首地址可能相同，也可能不同，也可能因开辟失败为NULL
//
//	for (int i = 0; i < num_new; i++)
//	{
//		cout << "arr_new[i] = " << arr_new[i] << endl;
//	}
//
//	// 仅释放新的就可以了
//	if (arr_new)
//	{
//		free(arr_new);
//	}
//}
//
//void test02()
//{
//	int num_old = 2;
//	int* arr_old = (int*)malloc(sizeof(int) * num_old);
//	arr_old[0] = 0;
//	arr_old[1] = 1;
//
//	// realloc的长度可以小于旧的，会把后面的内存释放掉
//	int* arr_new = (int*)realloc(arr_old, sizeof(int) * 1);
//	cout << arr_new[0] << endl;
//	cout << arr_new[1] << endl;
//
//	// 虽然arr_new[1] 不报错，但是该内存已经被释放了
//	// 0
//	// - 33686019
//
//	free(arr_new);
//}
//
//int main(void)
//{
//	//test01();
//
//	test02();
//
//	system("pause");
//	return 0;
//}