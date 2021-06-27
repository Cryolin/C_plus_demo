//#include <iostream>
//
//using namespace std;
//
//// 使用未定义的类型
//class Teacher;
//
//// 声明空参构造函数，下面函数就不报错了
////class Teacher
////{
////public:
////	Teacher();
////};
//
//class Student
//{
//public:
//	// 这里不会报错，没有用到Teacher的构造函数或者成员函数
//	Student(Teacher& teacher)
//	{
//	}
//
//	Teacher& showMyTeacher(Teacher& teacher)
//	{
//		// 传参和返回值使用引用，不会调用构造函数，不报错
//	}
//
//	//void showMyTeacher()
//	//{
//	//	// 这里显示调用了Teacher的构造函数，但尚未定义，报错
//	//	Teacher t;
//	//}
//
//	//Teacher getTeacher(Teacher& teacher)
//	//{
//	//	// 直接返回Teacher，会调用Teacher的构造函数，报错
//	//	return teacher;
//	//}
//
//	//void showMyTeacher(Teacher teacher)
//	//{
//	//	// 直接传teacher，同样会调用Teacher的构造函数，报错
//	//}
//};
//
////Teacher::Teacher()
////{
////}
//
//int main() {
//	system("pause");
//	return 0;
//}