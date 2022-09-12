//#include <iostream>
//#include <array>
//#define ArSize 10
//using namespace std;
//
//int main()
//{
//	double donation[ArSize];
//	double sum = 0.0;
//
//	for (int i = 0; i < ArSize; i++)
//	{
//		cout << "请输入donation [" << i << "]: " << endl;
//		while (!(cin >> donation[i]))
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "请输入一个double值: " << endl;
//
//		}
//		sum += donation[i];
//	}
//
//	double average = sum / ArSize;
//	int num = 0;
//	for (int i = 0; i < ArSize; i++)
//	{
//		if (donation[i] > average)
//			num++;
//	}
//
//	cout << "平均值是： " << average << endl;
//	cout << "有 " << num << "个数字大于平均值。" << endl;
//
//	system("pause");
//	return 0;
//}