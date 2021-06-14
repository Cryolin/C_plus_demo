#include <iostream>

using namespace std;

int* getInt()
{
	// new关键字创建int对象，调用int对象的构造函数
	// 返回指向new的对象类型的指针
	int* a = new int(10);
	return a;
}

int* getIntArray()
{
	// 通过new关键字创建int数组，返回指向数组首地址的指针
	int* array = new int[10];
	for (int i = 0; i < 10; i++)
	{
		array[i] = 100 + i;
	}
	return array;
}

int main()
{
	int* a = getInt();

	cout << *a << endl;
	cout << *a << endl;

	// 通过delete函数，释放a的内存，相当于调用了int的析构函数
	// 执行完delete之后，无法再通过*a解引用
	delete a;

	int* array = getIntArray();
	cout << array[0] << endl;
	cout << array[1] << endl;

	// 对于数组，要通过delete[]释放内存，否则只能释放第0个位置的内存
	delete[] array;

	system("pause");
	return 0;
}