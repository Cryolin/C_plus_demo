#include <iostream>
using namespace std;

class Father
{

};

class Son : public Father
{
public:
	Son() : Father(), age(10)
	{

	}
	int age;
};

int main()
{
	int num = 1 << 2;
	cout << num << endl;

	system("pause");
}