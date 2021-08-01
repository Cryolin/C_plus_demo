//#include <iostream>
//using namespace std;
//
//// 函数指针01，android zogote进程注册JNI的代码分析
//// 具体位置：frameworks/base/core/jni/AndroidRuntime.cpp
//
//// REG_JNI宏定义，用大括号包起来，用于给下面的结构体初始化赋值
//// name前面加井号，代表取宏参数的字符串
//#define REG_JNI(name) { name, #name } 
//
//// 这个结构体包含一个函数指针和一个字符串
//// 可以通过  结构体变量.mProc()  的方式，使用结构体中的函数指针
//struct myType {
//    void(*mProc)();
//    const char* mName;
//};
//
//void print() {
//    printf("hello,world\n");
//}
//
//// 结构体数组
//const myType gRegJNI[] = {
//    // 与宏定义替换之后，可以给myType初始化
//    // 初始化后，把  print  函数赋值给函数指针
//    REG_JNI(print),
//};
//
//void register_jni_procs(const myType arrays[], size_t count)
//{
//    // 打印结果：
//    // hello world
//    // print
//    for (size_t i = 0; i < count; i++)
//    {
//        arrays[i].mProc();
//        cout << arrays[i].mName << endl;
//    }
//}
//
//int main() {
//    register_jni_procs(gRegJNI, 1);
//    system("pause");
//    return 0;
//}