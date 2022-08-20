////6．编写一个程序，其main()调用一个用户定义的函数（以光年
////值为参数，并返回对应天文单位的值）。该程序按下面的格式要求用
////户输入光年值，并显示结果：
//
////天文单位是从地球到太阳的平均距离（约150000000公里或
////93000000英里），光年是光一年走的距离（约10万亿公里或6万亿英
////里）（除太阳外，最近的恒星大约离地球4.2光年）。请使用double类
////型（参见程序清单2.4），转换公式为：
////1光年 = 63240天文单位
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	double lightYears;
//	cout << "Enter the number of light years: ";
//	cin >> lightYears;
//	cout << endl;
//	double asUnits = 63240 * lightYears;
//	cout << lightYears << " light years = " << asUnits << " astronomical units." << endl;
//
//	system("pause");
//	return 0;
//}