//#include <iostream>
//using namespace std;
//
//const int Len = 100;
//
//struct chaff
//{
//	char dross[20];
//	int slag;
//};
//
//void show_chaff(const chaff&);
//
//int main()
//{
//	char* buffer = new char[Len];
//	chaff* chaff_array = new (buffer) chaff[2];
//
//	chaff_array[0] = { "abc", 1 };
//	show_chaff(chaff_array[0]);
//	strcpy(chaff_array[0].dross, "ddd");
//	show_chaff(chaff_array[0]);
//
//	strcpy(chaff_array[1].dross, "hahaha");
//	chaff_array[1].slag = 2;
//	show_chaff(chaff_array[1]);
//
//	delete[] buffer;
//
//	return 0;
//}
//
//void show_chaff(const chaff& cha)
//{
//	cout << "chaff dross " << cha.dross << endl;
//	cout << "chaff slag " << cha.slag << endl;
//}