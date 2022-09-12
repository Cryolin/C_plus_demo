#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct donate
{
	string name;
	double money;
};

void showGrand(donate* don, int num)
{
	cout << "Grand Patrons:	\n";
	int count = 0;
	for (int i = 0; i < num; i++)
	{
		if (don[i].money > 10000)
		{
			cout << don[i].name << ", " << don[i].money << endl;
			count++;
		}
	}
	if (count == 0)
	{
		cout << "none" << endl;
	}
}

void showPatrons(donate* don, int num)
{
	cout << "Patrons: \n";
	int count = 0;
	for (int i = 0; i < num; i++)
	{
		if (don[i].money <= 10000)
		{
			cout << don[i].name << endl;
			count++;
		}

	}
	if (count == 0)
	{
		cout << "none" << endl;
	}
}

int main()
{
	ifstream file;
	file.open("donate.txt");

	if (!file.is_open())
	{
		cout << "open file error\n";
		system("pause");
		return 0;
	}

	int num;
	file >> num;

	donate* members = new donate[num];
	for (int i = 0; i < num; i++)
	{
		file.get();
		getline(file, members[i].name);
		file >> members[i].money;
	}

	showGrand(members, num);
	showPatrons(members, num);

	system("pause");
	return 0;
}