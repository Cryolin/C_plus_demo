#include <iostream>
#include <string>
using namespace std;

//void printstr(const string& str);
string printstr(string& str);

int main()
{
	string str1 = "123";
	const string str2 = "456";
	string str3 = printstr(str1);
	cout << str1 << endl;
	cout << str3 << endl;
	str3[0] = 'a';
	cout << str1 << endl;
	cout << str3 << endl;

	

	//printstr(str2);

	return 0;
}

//void printstr(const string& str)
//{
//	cout << "const" << endl;
//}
string printstr(string& str)
{
	cout << "fei const" << endl;
	return str;
}
