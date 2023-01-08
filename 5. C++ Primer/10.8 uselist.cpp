//#include <iostream>
//#include "10.8 list.h"
//#include "10.8 person.h"
//
//using namespace std;
//
//void showperson(const Person& person);
//
//int main()
//{
//	Person p1("AAA", 20);
//	Node node1(&p1);
//	Person p2("BBB", 10);
//	Node node2(&p2);
//
//	List list;
//	cout << "list.isempty ? : " << list.isempty() << endl;
//	cout << "list.isfull ? : " << list.isfull() << endl;
//
//	list.additem(&node1);
//	list.visit(showperson);
//	list.additem(&node2);
//	list.visit(showperson);
//
//	Person p3 = Person("CCC", 25);
//	Person p4 = Person("DDD", 50);
//	Node node3(&p3);
//	Node node4(&p4);
//	list.additem(&node3);
//	list.additem(&node4);
//	list.visit(showperson);
//
//	cout << "list.isempty ? : " << list.isempty() << endl;
//
//	return 0;
//}