//#include <iostream>
//#include "sales.h"
//
//namespace sales
//{
//	void setSales(sale& s, const double ar[], int n)
//	{
//		double max = 0;
//		double min = INT_MAX;
//		double sum = 0;
//		for (int i = 0; i < QUARTERS; i++)
//		{
//			if (i > (n - 1))
//			{
//				s.sales[i] = 0;
//			}
//			else {
//				s.sales[i] =  ar[i];
//			}
//			max = s.sales[i] > max ? s.sales[i] : max;
//			min = s.sales[i] < min ? s.sales[i] : min;
//			sum += s.sales[i];
//		}
//		double average = sum / QUARTERS;
//		s.max = max;
//		s.min = min;
//		s.average = average;
//	}
//	void setSales(sale& s)
//	{
//		using namespace std;
//		double max = 0;
//		double min = INT_MAX;
//		double sum = 0;
//		for (int i = 0; i < QUARTERS; i++)
//		{
//			cout << "Enter a double" << endl;
//			cin >> s.sales[i];
//			max = s.sales[i] > max ? s.sales[i] : max;
//			min = s.sales[i] < min ? s.sales[i] : min;
//			sum += s.sales[i];
//		}
//		double average = sum / QUARTERS;
//		s.max = max;
//		s.min = min;
//		s.average = average;
//	}
//	void showSales(const sale& s)
//	{
//		using namespace std;
//		cout << "s.sales : " << s.sales[0] << ", " << s.sales[1] << ", "
//			<< s.sales[2] << ", " << s.sales[3] << endl;
//		cout << "max : " << s.max << endl;
//		cout << "min : " << s.min << endl;
//		cout << "average : " << s.average << endl;
//	}
//}