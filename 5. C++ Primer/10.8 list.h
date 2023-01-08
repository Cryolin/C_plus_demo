//#ifndef _LIST_H_
//#define _LIST_H_
//
//#include "10.8 person.h"
//
//typedef Person Item;
//
//class Node
//{
//private:
//	const Item* item;
//	Node* next = nullptr;
//public:
//	Node(const Item* item, Node* next = nullptr);
//	const Item* getItem();
//	Node* getNext();
//	void setNext(Node* next);
//};
//
//class List
//{
//private:
//	static const int MAX = 10;
//	Node first = nullptr;
//	Node end = nullptr;
//	int len = 0;
//public:
//	List();
//	void additem(Node* node);
//	bool isempty();
//	bool isfull();
//	void visit(void (*pf)(const Item& item));
//};
//
//#endif