//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include "11.3 vector.h"
//
//int main()
//{
//	using namespace std;
//	using VECTOR::Vector;
//	srand(time(0));
//	double direction;
//	Vector step;
//	Vector result(0.0, 0.0);
//	unsigned long steps = 0;
//	double target;
//	double dstep;
//	cout << "Enter target distance (q to quit): ";
//	int max = 0;
//	int min = INT_MAX;
//	int sum = 0;
//	double average = 0.0;
//	while (cin >> target)
//	{
//		cout << "Enter step length: ";
//		if (!(cin >> dstep))
//		{
//			break;
//		}
//		int N;
//		cout << "input test times: ";
//		cin >> N;
//		for (int i = 0; i < N; i++)
//		{
//			while (result.magval() < target)
//			{
//				direction = rand() % 360;
//				step.reset(dstep, direction, Vector::POL);
//				result = result + step;
//				steps++;
//			}
//			max = max > steps ? max : steps;
//			min = min < steps ? min : steps;
//			average = (average * sum + steps) / (sum + 1);
//			sum++;
//			steps = 0;
//			result.reset(0.0, 0.0);
//		}
//		cout << "after " << N << " times test, max step is :  " << max << ", min step is " << min
//			<< "average step is " << average << endl;
//		max = 0;
//		min = INT_MAX;
//		average = 0.0;
//		sum = 0;
//		cout << "Enter target distance (q to quit): ";
//	}
//	cout << "Bye!\n";
//	cin.clear();
//	while (cin.get() != '\n')
//	{
//		continue;
//	}
//
//	return 0;
//}