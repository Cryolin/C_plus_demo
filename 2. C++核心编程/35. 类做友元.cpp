//#include <iostream>
//
//using namespace std;
//
//// 由于Student需要使用Teacher类作为友元，所以Teacher提前声明
//class Teacher;
//class Student
//{
//	// Teacher类是Student类的友元，可以访问Student类的非public内容
//	friend class Teacher;
//public:
//	Student(int age)
//	{
//		this->age = age;
//	}
//private:
//	int age;
//};
//
//class Teacher
//{
//public:
//	void getAge(Student& student)
//	{
//		cout << "student的年龄： " << student.age << endl;
//	}
//
//	void getAge2(Student* student)
//	{
//		cout << "student的年龄： " << student->age << endl;
//	}
//};
//
//
//int main() {
//	Teacher t;
//	Student s(10);
//	t.getAge(s);
//	t.getAge2(&s);
//
//	system("pause");
//	return 0;
//}