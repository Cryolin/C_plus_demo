//// compile with string1.cpp
//// 最初，shortest指针指向数组中的第一个对象。
//// 每当程序找到比指向的字符串更短的对象时，就把shortest重新设置为指向该对象。
//// 同样，first指针跟踪按字母顺序排在最前面的字符串。
//// 这两个指针并不创建新的对象，而只是指向已有的对象。因此，这些指针并不要求使用new来分配内存。
//#include <iostream>
//#include <cstdlib>  // (or stdlib.h) for rand(), srand()
//#include <ctime>    // (or time.h) for time()
//#include "12.4 string1.h"
//const int ArSize = 10;
//const int MaxLen = 81;
//int main()
//{
//    using namespace std;
//    String name;
//    cout << "Hi, what's your name?\n>>";
//    cin >> name;
//    cout << name << ", please enter up to " << ArSize
//        << " short sayings <empty line to quit>:\n";
//    String sayings[ArSize];
//    char temp[MaxLen]; // temporary string storage
//    int i;
//    for (i = 0; i < ArSize; i++)
//    {
//        cout << i + 1 << ":";
//        cin.get(temp, MaxLen);
//        while (cin && cin.get() != '\n')
//            continue;
//        if (!cin || temp[0] == '\0') // empty line?
//            break; // i not incremented
//        else
//            sayings[i] = temp; // overloaded assignment
//    }
//    int total = i; // total # of lines read
//    if (total > 0)
//    {
//        cout << "Here are your sayings:\n";
//        for (i = 0; i < total; i++)
//            cout << sayings[i] << "\n";
//        // use pointers to keep track of shortest, first strings
//        String* shortest = &sayings[0]; // initialize to first object
//        String* first = &sayings[0];
//        for (i = 1; i < total; i++)
//        {
//            if (sayings[i].length() < shortest->length())
//                shortest = &sayings[i];
//            if (sayings[i] < *first) // compare values
//                first = &sayings[i]; // assign address
//        }
//        cout << "Shortest saying:\n" << *shortest << endl;
//        cout << "First alphabetically:\n" << *first << endl;
//        srand(time(0));
//        int choice = rand() % total; // pick index at random
//        // use new to create, initialize new String object
//        String* favorite = new String(sayings[choice]);    // 指针favorite指向new创建的未被命名对象。
//        cout << "My favorite saying:\n" << *favorite << endl;
//        delete favorite;
//    }
//    else
//        cout << "Not much to say, eh?\n";
//    cout << "Bye.\n";
//    return 0;
//}