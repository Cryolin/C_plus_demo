//#include <iostream>
//using namespace std;
//
//union student
//{
//	char name[10];
//	int age;
//};
//
//int main()
//{
//	student stu;
//	strcpy(stu.name, "abc");
//	// 只有name
//	cout << stu.name << stu.age << endl;
//
//	stu.age = 10;
//	// name被覆盖，只有age
//	cout << stu.name << stu.age << endl;
//
//	// sizeof联合体，选取最大的成员的长度，如果不能整除基本数据类型，向上取整
//	// 例如student最大成员长度为10,但另一个成员是int，10不能整除4，需要与int对齐
//	// 故sizeof(stu) 为12
//	cout << sizeof(stu) << endl;
//
//	system("pause");
//}