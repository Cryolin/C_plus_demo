//#include <iostream>
//using namespace std;
//
//const int Max = 5;
//double* fill_array(double ar[], int limit);
//void show_array(double ar[], double* end);
//void revalue(double r, double ar[], double* n);
//
//int main()
//{
//	double properties[Max];
//
//	double* end = fill_array(properties, Max);
//	show_array(properties, end);
//	if (end - properties > 0)
//	{
//		cout << "Enter revaluation factor: ";
//		double factor;
//		while (!(cin >> factor))
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//			{
//				continue;
//			}
//			cout << "Bad input; Please enter a number: ";
//		}
//		revalue(factor, properties, end);
//		show_array(properties, end);
//	}
//	cout << "Done.\n";
//
//	system("pause");
//	return 0;
//}
//
//double* fill_array(double ar[], int limit)
//{
//	double temp;
//	int i;
//	for (i = 0; i < limit; i++)
//	{
//		cout << "Enter value #" << (i + 1) << ": ";
//		cin >> temp;
//		if (!cin)
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//			{
//				continue;
//			}
//			cout << "Bad input; input process terminated.\n";
//			break;
//		}
//		else if (temp < 0)
//		{
//			break;
//		}
//		ar[i] = temp;
//	}
//	return ar + i;
//}
//
//void show_array(double ar[], double* end)
//{
//	double* pt;
//	for (pt = ar; pt < end; pt++)
//	{
//		cout << *pt << endl;
//	}
//}
//
//void revalue(double r, double ar[], double* end)
//{
//	double* pt;
//	for (pt = ar; pt < end; pt++)
//	{
//		*pt *= r;
//	}
//}