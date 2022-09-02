//#include <iostream>
//#include <array>
//using namespace std;
//
//int main(void)
//{
//	const int num = 3;
//	array<double, num> score;
//
//	//输入成绩
//	cout << "Please enter the result of your first 40 yard run:";
//	cin >> score[0];
//	cout << "Please enter the result of your second 40 yard run:";
//	cin >> score[1];
//	cout << "Please enter the result of your third 40 yard run:";
//	cin >> score[2];
//
//	//输出成绩
//	for (int i = 0; i < num; i++)
//	{
//		cout << "第" << i + 1 << "次成绩：" << score[i] << endl;
//	}
//
//	//平均成绩
//	double sum = 0;
//	for (int i = 0; i < num; i++)
//	{
//		sum += score[i];
//	}
//	cout << "your average score is:" << sum / num << endl;
//
//	system("pause");
//	return 0;
//}