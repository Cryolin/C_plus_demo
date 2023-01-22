//// placenew1.cpp -- new, placement new, no delete
//// 使用了定位new运算符和常规new运算符给对象分配内存.
//// 该程序使用new运算符创建了一个512字节的内存缓冲区，
//// 然后使用new运算符在堆中创建两个JustTesting对象，
//// 并试图使用定位new运算符在内存缓冲区中创建两个JustTesting对象。
//// 最后，它使用delete来释放使用new分配的内存。
//#include <iostream>
//#include <string>
//#include <new>
//using namespace std;
//const int BUF = 512;
//class JustTesting
//{
//private:
//    string words;
//    int number;
//public:
//    JustTesting(const string& s = "Just Testing", int n = 0)
//    {
//        words = s; number = n; cout << words << " constructed\n";
//    }
//    ~JustTesting() { cout << words << " destroyed\n"; }
//    void Show() const { cout << words << ", " << number << endl; }
//};
//int main()
//{
//    char* buffer = new char[BUF]; // get a block of memory
//    JustTesting* pc1, * pc2;
//    pc1 = new (buffer) JustTesting; // place object in buffer
//    pc2 = new JustTesting("Heap1", 20); // place object on heap
//    cout << "Memory block addresses:\n" << "buffer: "
//        << (void*)buffer << " heap: " << pc2 << endl;
//    cout << "Memory contents:\n";
//    cout << pc1 << ": ";
//    pc1->Show();
//    cout << pc2 << ": ";
//    pc2->Show();
//    JustTesting* pc3, * pc4;
//    pc3 = new (buffer) JustTesting("Bad Idea", 6);
//    pc4 = new JustTesting("Heap2", 10);
//    cout << "Memory contents:\n";
//    cout << pc3 << ": ";
//    pc3->Show();
//    cout << pc4 << ": ";
//    pc4->Show();
//    delete pc2; // free Heap1
//    delete pc4; // free Heap2
//    delete[] buffer; // free buffer
//    cout << "Done\n";
//    return 0;
//}