//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//class Person
//{
//public:
//	int age;
//	char name[64];
//};
//
//void test()
//{
//	ifstream ifs("testBinary.txt", ios::in | ios::binary);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	Person p;
//	ifs.read((char*)&p, sizeof(p));
//	cout << p.name << p.age << endl;
//	ifs.close();
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}