////7．编写一个程序，要求用户按欧洲风格输入汽车的耗油量（每
////100公里消耗的汽油量（升）），然后将其转换为美国风格的耗油量—
////每加仑多少英里。注意，除了使用不同的单位计量外，美国方法（距
////离 / 燃料）与欧洲方法（燃料 / 距离）相反。100公里等于62.14英里，1
////加仑等于3.875升。因此，19mpg大约合12.4l / 100km，l27mpg大约合
////8.71 / 100km。
//
//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	//用户按欧洲风格输入汽车的耗油量(每100公里消耗的汽油量(升))
//	double consumption_Eur;
//	int mpg;
//	cout << "Enter the fuel consumption of the vehicle (per 100 km):";
//	cin >> consumption_Eur;
//	//将其转换为美国风格的耗油量―每加仑多少英里
//	const double _100km_mile = 62.14;
//	const double gai_L = 3.875;
//	mpg = _100km_mile / (consumption_Eur / gai_L);
//	cout << "So your fuel consumption of the vehicle is " << mpg << "mpg" << endl;
//
//	system("pause");
//	return 0;
//}