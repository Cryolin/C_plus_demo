//#include <iostream>
//using namespace std;
//
//double add(double x, double y);
//double subtract(double x, double y);
//double multiply(double x, double y);
//double caculate(double x, double y, double (*func)(double, double));
//int main(void)
//{
//    double x;
//    double y;
//    double (*pf[3])(double, double) = { add,subtract,multiply };//Ö¸ÕëÊý×é
//    cout << "Enter two numbers(q to quit):";
//    while (cin >> x >> y)
//    {
//        for (int i = 0; i < 3; i++)
//        {
//            cout << "The result #" << i + 1 << ":" << caculate(x, y, pf[i]) << endl;
//
//        }
//        cout << "Enter two numbers(q to quit):" << endl;
//    }
//    system("pause");
//    return 0;
//}
//double add(double x, double y)
//{
//    return x + y;
//}
//
//double subtract(double x, double y)
//{
//    return x - y;
//}
//
//double multiply(double x, double y)
//{
//    return x * y;
//}
//
//double caculate(double x, double y, double (*func)(double, double))
//{
//    return (*func)(x, y);
//}