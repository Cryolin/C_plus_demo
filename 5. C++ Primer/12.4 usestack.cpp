#include <iostream>
#include "12.4 stack.h"
using namespace std;

int main(void)
{
	Stack st1;
	Stack st2;
	Item p1[10] = { 12,20,3,0,2,2,3,5,8,9 };
	for (int i = 0; i < 10; i++)
	{
		st2.push(p1[i]);
		cout << p1[i] << " ";
	}
	cout << endl;
	cout << "Is st2 empty: " << st2.isempty() << endl;
	cout << "Is st2 full: " << st2.isfull() << endl;

	st1 = st2;
	cout << "st1赋值后：" << endl;
	cout << "Is st1 empty: " << st1.isempty() << endl;
	cout << "Is st1 full: " << st1.isfull() << endl;

	Stack st3(st2);
	cout << "用st2构造st3后:" << endl;
	cout << "Is st3 empty: " << st3.isempty() << endl;
	cout << "Is st3 full: " << st3.isfull() << endl;

	for (int i = 0; i < 10; i++)
	{
		st2.pop(p1[i]);
		cout << p1[i] << " ";
	}
	cout << endl;
	cout << "st2全pop后：" << endl;
	cout << "Is st2 empty: " << st2.isempty() << endl;
	cout << "Is st2 full: " << st2.isfull() << endl;
	for (int i = 0; i < 6; i++)
	{
		st3.pop(p1[i]);
		cout << p1[i] << " ";
	}
	cout << endl;
	cout << "st3部分pop后：" << endl;
	cout << "Is st3 empty: " << st3.isempty() << endl;
	cout << "Is st3 full: " << st3.isfull() << endl;
	system("pause");
	return 0;
}