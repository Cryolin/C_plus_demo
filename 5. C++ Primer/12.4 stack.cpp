//#include <iostream>
//#include "12.4 stack.h"
//
//Stack::Stack(int n)
//{
//	pitems = new Item[MAX];
//	size = 10;
//	top = 0;
//}
//
//Stack::Stack(const Stack& st)
//{
//	// 复制构造函数
//	size = st.size;
//	top = st.top;
//	pitems = new Item[size];
//	for (int i = 0; i < size; i++)
//	{
//		pitems[i] = st.pitems[i];
//	}
//}
//
//Stack::~Stack()
//{
//	delete[] pitems;
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
//// push() returns false if stack already is full, true otherwise
//bool Stack::push(const Item& item)
//{
//	if (isfull())
//	{
//		return false;
//	}
//	pitems[top++] = item;
//	return true;
//}
//
//// pop() returns false if stack already is empty, true otherwise
//bool Stack::pop(Item& item)
//{
//	if (isempty())
//	{
//		return false;
//	}
//	item = pitems[--top];
//	return true;
//}
//
//Stack& Stack::operator=(const Stack& st)
//{
//	if (this == &st)
//	{
//		return *this;
//	}
//	delete[]pitems;
//	size = st.size;
//	pitems = new Item[size];
//	for (int i = 0; i < size; i++)
//	{
//		pitems[i] = st.pitems[i];
//	}
//	top = st.top;
//	return *this;
//}