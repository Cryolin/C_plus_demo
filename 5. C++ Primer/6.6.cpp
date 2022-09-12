//#include <iostream>
//#include <string>
//using namespace std;
//struct donate
//{
//	string name;
//	double money;
//};
//
//void showGrand(donate* don, int num)
//{
//	cout << "Grand Patrons:	\n";
//	int count = 0;
//	for (int i = 0; i < num; i++)
//	{
//		if (don[i].money > 10000)
//		{
//			cout << don[i].name << ", " << don[i].money << endl;
//			count++;
//		}
//	}
//	if (count == 0)
//	{
//		cout << "none" << endl;
//	}
//}
//
//void showPatrons(donate* don, int num)
//{
//	cout << "Patrons: \n";
//	int count = 0;
//	for (int i = 0; i < num; i++)
//	{
//		if (don[i].money <= 10000)
//		{
//			cout << don[i].name << endl;
//			count++;
//		}
//
//	}
//	if (count == 0)
//	{
//		cout << "none" << endl;
//	}
//}
//
//int main()
//{
//	int num;
//	cout << "请输入捐款者的数量： " << endl;
//	cin >> num;
//
//	donate* members = new donate[num];
//	for (int i = 0; i < num; i++)
//	{
//		cin.get();
//		cout << "请输入第" << i + 1 << "个捐款者的名字：\n";
//		getline(cin, members[i].name);
//		cout << "请输入第" << i + 1 << "个捐款者的捐款数量：\n";
//		cin >> members[i].money;
//	}
//
//	showGrand(members, num);
//	showPatrons(members, num);
//
//	system("pause");
//	return 0;
//}