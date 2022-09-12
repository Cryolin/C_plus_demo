//#include <iostream>
//using namespace std;
//const int strsize = 50;
//struct bop
//{
//	char fullname[strsize];
//	char title[strsize];
//	char bopname[strsize];
//	int preference;
//};
//
//int main()
//{
//	bop bop_array[5] =
//	{
//		{"colin", "博士", "中科大", 0},
//		{"juju", "博士后", "厦门大学", 0},
//		{"dog", "硕士", "中科大", 1},
//		{"pigdidi", "本科", "合工大", 2},
//		{"liyang", "硕士", "郑大", 3}
//	};
//	cout << "Benevolent Order of Programmers Report\n"
//		"a. display by name		b. display by title\n"
//		"c. display by bopame	d. display by preference\n"
//		"q. quit";
//	cout << "Enter your choice: ";
//	char ch;
//	bool is_quit = false;
//	while (!is_quit && (cin >> ch))
//	{
//		switch (ch)
//		{
//		case 'a':
//			for (bop bop_item : bop_array)
//			{
//				cout << bop_item.fullname << endl;
//			}
//			break;
//		case 'b':
//			for (bop bop_item : bop_array)
//			{
//				cout << bop_item.title << endl;
//			}
//			break;
//		case 'c':
//			for (bop bop_item : bop_array)
//			{
//				cout << bop_item.bopname << endl;
//			}
//			break;
//		case 'd':
//			for (bop bop_item : bop_array)
//			{
//				cout << bop_item.preference << endl;
//			}
//			break;
//		case 'q':
//			is_quit = true;
//			break;
//		default:
//			cout << "请输入合法字符" << endl;
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}