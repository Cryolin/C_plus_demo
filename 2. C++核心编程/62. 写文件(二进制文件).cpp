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
//	ofstream ofs;
//	ofs.open("testBinary.txt", ios::out | ios::binary);
//	
//	Person person = {10, "уехЩ"};
//
//	ofs.write((const char*)&person, sizeof(person));
//
//	ofs.close();
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}