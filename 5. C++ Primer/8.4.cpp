//#include <iostream>
//using namespace std;
//
//struct stringy
//{
//	char* str;
//	int ct;
//};
//
//void set(stringy& sgy, const char* str);
//void show(const stringy& sgy, int time = 1);
//void show(const char* str, int time = 1);
//
//int main()
//{
//	stringy beany;
//	char testing[] = "Reality isn't what it used to be.";
//
//	set(beany, testing);
//	show(beany);
//	show(beany, 2);
//	testing[0] = 'D';
//	testing[1] = 'u';
//	show(testing);
//	show(testing, 3);
//	show("Done!");
//
//	return 0;
//}
//
//void set(stringy& sgy, const char* str)
//{
//	sgy.ct = strlen(str);
//	sgy.str = new char[sgy.ct + 1];
//	strcpy(sgy.str, str);
//}
//
//void show(const stringy& sgy, int time)
//{
//	for (int i = 0; i < time; i++)
//	{
//		cout << sgy.str << endl;
//	}
//}
//
//void show(const char* str, int time)
//{
//	for (int i = 0; i < time; i++)
//	{
//		cout << str << endl;
//	}
//}