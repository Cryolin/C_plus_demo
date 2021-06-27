//#include <iostream>
//
//using namespace std;
//
//class Person
//{
//	// 如下两个函数可以访问Person的非public内容
//	friend void getAge(Person& person);
//	friend void getAge2(Person* person);
//public:
//	Person(int age)
//	{
//		this->age = age;
//	}
//private:
//	int age;
//};
//
//void getAge(Person& person)
//{
//	cout << "person.age: " << person.age << endl;
//}
//
//void getAge2(Person* person)
//{
//	cout << "person.age: " << person->age << endl;
//}
//
//int main() {
//	Person p(10);
//	getAge(p);
//	getAge2(&p);
//
//	system("pause");
//	return 0;
//}