//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//	ifstream file;
//	file.open("score.txt");
//
//	if (!file.is_open())
//	{
//		cout << " open error" << endl;
//	}
//	else
//	{
//		char ch;
//		int chars = 0;
//		while (file.get(ch))
//		{
//			cout << ch;
//			chars++;
//		}
//		if (file.eof())
//		{
//			cout << "一共有：" << chars << "个字符." << endl;
//		}
//	}
//
//	system("pause");
//	return 0;
//}