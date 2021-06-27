//#include <iostream>
//
//using namespace std;
//
//class Student;
//class Teacher
//{
//public:
//	int getAge(Student& student);
//	int getAge2(Student* student);
//};
//
//class Student
//{
//	// Teacher的getAge成员函数作为Student的友元，可以访问非public的内容
//	friend int Teacher::getAge(Student& student);
//private:
//	int age;
//};
//
//int Teacher::getAge(Student& student)
//{
//	return student.age;
//}
//
////int Teacher::getAge2(Student* student)
////{
////	// 无法获取到age
////	return student->age;
////}
//
//int main() {
//	system("pause");
//	return 0;
//}