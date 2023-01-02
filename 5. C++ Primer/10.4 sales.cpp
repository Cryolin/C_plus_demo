//#include <iostream>
//#include "10.4 sales.h"
//
//namespace sales
//{
//	Sale::Sale(const double ar[], int n)
//	{
//		double max = 0;
//		double min = INT_MAX;
//		double sum = 0;
//		for (int i = 0; i < QUARTERS; i++)
//		{
//			if (i > (n - 1))
//			{
//				sales[i] = 0;
//			}
//			else {
//				sales[i] =  ar[i];
//			}
//			max = sales[i] > max ? sales[i] : max;
//			min = sales[i] < min ? sales[i] : min;
//			sum += sales[i];
//		}
//		double average = sum / QUARTERS;
//		this->max = max;
//		this->min = min;
//		this->average = average;
//	}
//	Sale::Sale()
//	{
//		using namespace std;
//		double max = 0;
//		double min = INT_MAX;
//		double sum = 0;
//		for (int i = 0; i < QUARTERS; i++)
//		{
//			cout << "Enter a double" << endl;
//			cin >> sales[i];
//			max = sales[i] > max ? sales[i] : max;
//			min = sales[i] < min ? sales[i] : min;
//			sum += sales[i];
//		}
//		double average = sum / QUARTERS;
//		this->max = max;
//		this->min = min;
//		this->average = average;
//	}
//	void Sale::showSale()
//	{
//		using namespace std;
//		cout << "s.sales : " << sales[0] << ", " << sales[1] << ", "
//			<< sales[2] << ", " << sales[3] << endl;
//		cout << "max : " << max << endl;
//		cout << "min : " << min << endl;
//		cout << "average : " << average << endl;
//	}
//}