//#include <iostream>
//#include <mutex>
//using namespace std;
//
//int main()
//{
//    // once_flag 用于辅助call_once使用
//    once_flag flag;
//
//    call_once(flag, []() {
//        cout << "123" << endl;
//        });
//
//    // 重复调用时，不会执行，直接返回
//    call_once(flag, []() {
//        cout << "456" << endl;
//        });
//
//    system("pause");
//}