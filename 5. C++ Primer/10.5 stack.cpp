//#include <iostream>
//#include "10.5 stack.h"
//
//Stack::Stack()
//{
//	top = 0;
//}
//
//bool Stack::isempty() const
//{
//	return top == 0;
//}
//
//bool Stack::isfull() const
//{
//	return top == MAX;
//}
//
//bool Stack::push(const Item& item)
//{
//	if (top < MAX)
//	{
//		items[top++] = item;
//		return true;
//	}
//	else
//		return false;
//}
//
//bool Stack::pop()
//{
//	if (top > 0)
//	{
//		Item item = items[--top];
//		sum += item.payment;
//		std::cout << "total payment now is : " << sum << std::endl;
//		return true;
//	}
//	else
//	{
//		std::cout << "stack is empty, pop fail" << std::endl;
//		return false;
//	}
//}