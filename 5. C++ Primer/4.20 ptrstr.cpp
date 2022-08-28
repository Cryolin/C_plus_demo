//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char animal[20] = "bear";
//	const char* bird = "wren";
//	char* ps;
//
//	cout << animal << " and ";
//	cout << bird << "\n";
//	// cout << ps << "\n";		// may display garbage, may cause a crash
//
//	cout << "Enter a kind of animal: ";
//	cin >> animal;
//	
//	// cin >> ps;	Too horrible a blunder to try; ps doesn't
//	//				point to allocated space
//
//	ps = animal;
//	cout << ps << "!\n";
//	cout << "Before using strcpy():\n";
//	cout << animal << " at " << (int*)animal << endl;
//	cout << ps << " at " << (int*)ps << endl;
//
//	ps = new char[strlen(animal) + 1];
//	strcpy(ps, animal);
//	cout << "After using strcpy():\n";
//	cout << animal << " at " << (int*)animal << endl;
//	cout << ps << " at " << (int*)ps << endl;
//	delete[] ps;
//
//	const char* aaa = "abc";
//	const char* bbb = "abc";
//	cout << "LSYLSY " << (int*)aaa << endl;
//	cout << "LSYLSY " << (int*)bbb << endl;
//
//	system("pause");
//	return 0;
//}