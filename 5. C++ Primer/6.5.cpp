//#include <iostream>
//using namespace std;
//
//int main()
//{
//	double cash;
//	double tax001 = 10000.0 * 0.1;
//	double tax002 = 20000.0 * 0.15;
//	cout << "请输入您的收入";
//
//	while (cin >> cash)
//	{
//		int tax = 0;
//		if (cash < 0)
//		{
//			cout << "输入负数，循环结束\n";
//			break;
//		}
//		else if (cash <= 5000)
//		{
//			tax = 0;
//		}
//		else if (cash <= 15000)
//		{
//			tax = (cash - 5000.0) * 0.1;
//		}
//		else if (cash <= 35000)
//		{
//			tax = (cash - 15000.0) * 0.15 + tax001;
//		}
//		else
//		{
//			tax = (cash - 35000.0) * 0.20 + tax001 + tax002;
//		}
//		cout << "您需缴纳税款：" << tax << endl;
//		cout << "请输入您的收入";
//	}
//
//	system("pause");
//	return 0;
//}