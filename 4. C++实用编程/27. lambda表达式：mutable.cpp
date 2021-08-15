//#include <algorithm>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//    int t = 10;
//
//    auto l = [t]() mutable {
//        return ++t;
//    };
//
//    auto l2 = [t]() mutable {
//        return ++t;
//    };
//
//    cout << l() << endl;
//    cout << l2() << endl;
//    cout << l() << endl;
//    cout << l2() << endl;
//    cout << t << endl;
//
//    system("pause");
//}