//#include <iostream>
//#include <mutex>
//
//// windows环境下通过windows.h中的函数获取进程&线程信息
//#include<windows.h>
//using namespace std;
//
//mutex mtx;
//
//void func()
//{
//    cout << "子线程id : " << GetCurrentThreadId() << endl;
//}
//
//int main()
//{
//    thread t(func);
//
//    cout << "主线程id : " << GetCurrentThreadId() << endl;
//
//    t.join();
//
//    cout << "进程id : " << GetCurrentProcessId() << endl;
//    
//	system("pause");
//}