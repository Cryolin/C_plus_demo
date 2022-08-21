////2．编写一个小程序，要求以几英尺几英寸的方式输入其身高，并
////以磅为单位输入其体重。（使用3个变量来存储这些信息。）该程序报
////告其BMI（Body Mass Index，体重指数）。为了计算BMI，该程序以英
////寸的方式指出用户的身高（1英尺为12英寸），并将以英寸为单位的身
////高转换为以米为单位的身高（1英寸 = 0.0254米）。然后，将以磅为单
////位的体重转换为以千克为单位的体重（1千克 = 2.2磅）。最后，计算相
////应的BMI—体重（千克）除以身高（米）的平方。用符号常量表示各种
////转换因子。
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	const int foot_inches = 12;
//	const float inches_to_meters = 0.0254;
//    const float kg_to_pounds = 2.2;
//
//    int  height_foot;
//    float height_inches, weight_pounds;
//    cout << "Enter your height (in foot):";
//    cin >> height_foot;
//    cout << "And enter your height (in inches):";
//    cin >> height_inches;
//    cout << "Enter your weight(in pound):";
//    cin >> weight_pounds;
//    cout << "So you are " << height_foot << " foot and " << height_inches
//        << " inches height and " << weight_pounds << " pounds weight." << endl;
//
//    float height_in_meter = inches_to_meters * (foot_inches * height_foot + height_inches);
//    float weight_in_kg = weight_pounds / kg_to_pounds;
//    float bmi = weight_in_kg / pow(height_in_meter, 2);
//    cout << "Your BMI is : " << bmi << endl;
//
//	system("pause");
//	return 0;
//}