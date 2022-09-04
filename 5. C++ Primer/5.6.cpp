//#include <iostream>
//#define MONTH_ONE_YEAR 12
//using namespace std;
//
//int main()
//{
//	const char* months[MONTH_ONE_YEAR] =
//	{
//		"January", "February", "March",
//		"April", "May", "June","July",
//		"August", "September", "October",
//		"November","December"
//	};
//
//	int sales[3][MONTH_ONE_YEAR];
//	int sum[3] = {0, 0, 0};
//
//	for (int j = 0; j < 3; j++)
//	{
//		cout << "year " << j << "-------" << endl;
//		for (int i = 0; i < MONTH_ONE_YEAR; i++)
//		{
//			cout << "Enter you sale num in " << months[i] << endl;
//			cin >> sales[j][i];
//			sum[j] += sales[j][i];
//		}
//	}
//
//	int total_sum = 0;
//	for (int k = 0; k < 3; k++)
//	{
//		cout << sum[k] << " books are sell in year."<< k << endl;
//		total_sum += sum[k];
//	}
//
//	cout << total_sum << " books are sell in the pase three years." << endl;
//
//	system("pause");
//	return 0;
//}