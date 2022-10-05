//#include <iostream>
//#include <string>
//using namespace std;
//
//const int Seasons = 4;
//const char* Snames[] = { "Spring","Summer","Fail","Winter" };
//
//struct expenses
//{
//	double exp[Seasons];
//};
//
//void fill(expenses* exps);
//void show(expenses exps);
//
//int main()
//{
//	expenses exps;
//	fill(&exps);
//	show(exps);
//
//	system("pause");
//	return 0;
//}
//
//void fill(expenses* exps)
//{
//	for (int i = 0; i < Seasons; i++)
//	{
//		cout << "Enter " << Snames[i] << " expenses: ";
//		cin >> exps->exp[i];
//	}
//}
//
//void show(expenses exps)
//{
//	double total = 0.0;
//	cout << "\nEXPENSES\n";
//	for (int i = 0; i < Seasons; i++)
//	{
//		cout << Snames[i] << ": $" << exps.exp[i] << endl;
//		total += exps.exp[i];
//	}
//	cout << "Total Expenses: $" << total << endl;
//}