//#include <iostream>
//#include "10.8 person.h"
//#include "10.8 list.h"
//
//Node::Node(const Item* item, Node* next)
//{
//	this->item = item;
//	this->next = next;
//
//}
//const Item* Node::getItem()
//{
//	return item;
//}
//Node* Node::getNext()
//{
//	return next;
//}
//
//void Node::setNext(Node* next)
//{
//	this->next = next;
//}
//
//List::List() {}
//
//void List::additem(Node* node)
//{
//	if (len == 0)
//	{
//		first = *node;
//	}
//	else
//	{
//		Node* temp = &first;
//		while (temp->getNext() != nullptr)
//		{
//			temp = temp->getNext();
//		}
//		temp->setNext(node);
//	}
//	len++;
//}
//bool List::isempty()
//{
//	return len == 0;
//}
//bool List::isfull()
//{
//	return len == MAX;
//}
//void List::visit(void (*pf)(const Item& item))
//{
//	using namespace std;
//	if (len == 0)
//	{
//		cout << "List is empty, visit return" << endl;
//		return;
//	}
//	cout << "visit start, len is : " << len << endl;
//	Node node = first;
//	for (int i = 0; i < len; i++)
//	{
//		(*pf)(*(node.getItem()));
//		if (i != len - 1)
//		{
//			node = *(node.getNext());
//		}
//	}
//}