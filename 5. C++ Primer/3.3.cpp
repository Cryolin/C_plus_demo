////3．编写一个程序，要求用户以度、分、秒的方式输入一个纬度，
////然后以度为单位显示该纬度。1度为60分，1分等于60秒，请以符号常
////量的方式表示这些值。对于每个输入值，应使用一个独立的变量存储
////它。下面是该程序运行时的情况：
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	float degrees, minutes, seconds;
//	float convert_to_degrees;
//	cout << "Enter a latitude in degrees, minutes, and seconds :" << endl;
//	cout << "First, enter the degrees :";
//	cin >> degrees;
//	cout << "Next, enter the minutes of arc :";
//	cin >> minutes;
//	cout << "Finally, enter the seconds of arc :";
//	cin >> seconds;
//
//	//以度为单位显示该纬度。
//	const int degrees_minutes = 60;
//	const int degrees_seconds = 360;
//	convert_to_degrees = degrees + (minutes / degrees_minutes) + (seconds / degrees_seconds);
//	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " <<
//		convert_to_degrees << " degrees" << endl;
//
//	system("pause");
//	return 0;
//}