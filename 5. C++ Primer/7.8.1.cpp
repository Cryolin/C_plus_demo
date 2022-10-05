//#include <iostream>
//#include <string>
//using namespace std;
//
//const int Seasons = 4;
//const char* Snames[] = { "Spring","Summer","Fail","Winter" };
//
//void fill(double pa[], int num);
//void show(double da[], int num);
//
//int main()
//{
//	double expenses[Seasons];
//	fill(expenses, Seasons);
//	show(expenses, Seasons);
//
//	system("pause");
//	return 0;
//}
//
//void fill(double pa[], int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		cout << "Enter " << Snames[i] << " expenses: ";
//		cin >> pa[i];
//	}
//}
//
//void show(double pa[], int num)
//{
//	double total = 0.0;
//	cout << "\nEXPENSES\n";
//	for (int i = 0; i < num; i++)
//	{
//		cout << Snames[i] << ": $" << pa[i] << endl;
//		total += pa[i];
//	}
//	cout << "Total Expenses: $" << total << endl;
//}