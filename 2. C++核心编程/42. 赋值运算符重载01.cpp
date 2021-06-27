//#include <iostream>
//
//using namespace std;
//
//// ¸³ÖµÔËËã·ûÖØÔØ
//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = age;
//	}
//
//	Person& operator=(const Person& person)
//	{
//		age = person.age;
//		return *this;
//	}
//
//	int age;
//};
//
//int main() {
//	Person p1(10);
//	Person p2(20);
//	Person p3(30);
//
//	p3 = p2 = p1;
//
//	cout << "p1.age : " << p1.age << endl;
//	cout << "p2.age : " << p2.age << endl;
//	cout << "p3.age : " << p3.age << endl;
//
//	system("pause");
//	return 0;
//}