////4．编写一个程序，要求用户以整数方式输入秒数（使用long或
////long long变量存储），然后以天、小时、分钟和秒的方式显示这段时
////间。使用符号常量来表示每天有多少小时、每小时有多少分钟以及每
////分钟有多少秒。该程序的输出应与下面类似：
//
//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	//要求用户以整数方式输入秒数
//	long long before_seconds = 0;
//	cout << "Enter the number of seconds :";
//	cin >> before_seconds;
//
//	//使用符号常量来表示每天有多少小时、每小时有多少分钟以及每分钟有多少秒
//	const int day_hour = 24;
//	const int hour_minute = 60;
//	const int minute_second = 60;
//
//	//以天、小时、分钟和秒的方式显示这段时间
//	int days, hours, minutes, seconds;
//	days = before_seconds / (day_hour * hour_minute * minute_second);
//	hours = (before_seconds % (day_hour * hour_minute * minute_second)) / (hour_minute * minute_second);
//	minutes = (before_seconds - days * day_hour * hour_minute * minute_second - hours * hour_minute * minute_second) / minute_second;
//	seconds = (before_seconds - days * day_hour * hour_minute * minute_second - hours * hour_minute * minute_second) % minute_second;
//	cout << before_seconds << " seconds " << "= " << days << " days," <<
//		hours << " hours, " << minutes << " minutes," << seconds << " seconds" << endl;
//
//	system("pause");
//	return 0;
//}