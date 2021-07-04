//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//int main() {
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		system("pause");
//		return 0;
//	}
//
//	//第一种方式
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//第二种
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf,sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//第三种
//	//string buf;
//	//while (getline(ifs, buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	char c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c;
//	}
//	
//	ifs.close();
//
//	system("pause");
//	return 0;
//}