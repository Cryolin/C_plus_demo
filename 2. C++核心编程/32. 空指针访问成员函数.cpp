//#include <iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//	void showPerson()
//	{
//		cout << "show Person" << endl;
//	}
//
//	void showPersonAge()
//	{
//		// age相当于this->age,当this为NULL时报错
//		cout << "show Person age" << age << endl;
//	}
//
//	int age;
//};
//
//int main() {
//	// 创建一个空指针，指向类型为Person
//	Person* p = NULL;
//
//	// showPerson()不涉及this，可正常执行
//	p->showPerson();
//
//	// showPersonAge()用到了Person的成员变量,报异常
//	// p->showPersonAge();
//
//	system("pause");
//	return 0;
//}