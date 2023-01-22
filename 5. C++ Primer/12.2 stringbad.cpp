//#include <cstring>
//#include "12.1 stringbad.h"
//using std::cout;
//
//int StringBad::num_strings = 0; // 初始化静态变量，用于记录创建的类数量
//
//StringBad::StringBad(const StringBad& st)
//{
//    num_strings++; 				// handle static member update
//    len = st.len; 				// same length
//    str = new char[len + 1]; 	// allot space
//    std::strcpy(str, st.str); 	// copy string to new location
//    cout << num_strings << ": \"" << str
//        << "\" object created\n"; // For Your Information
//}
//
//StringBad& StringBad::operator=(const StringBad& st)
//{
//    if (this == &st) 			// object assigned to itself
//        return *this; 			// all done
//    delete[] str; 				// free old string
//    len = st.len;
//    str = new char[len + 1]; 	// get space for new string
//    std::strcpy(str, st.str); 	// copy the string
//    return *this; 				// return reference to invoking object
//}
//
//StringBad::StringBad()          // 在构造函数中使用new来为字符串分配空间
//{
//    len = 6;
//    str = new char[6];
//    std::strcpy(str, "happy");
//    num_strings++;
//    cout << num_strings << " : \"" << str << "\" object created.\n";
//}
//
//StringBad::StringBad(const char* s)
//{
//    // str = s;             // 这只保存了地址，而没有创建字符串副本。
//    len = std::strlen(s);   // 不包括末尾的空字符
//    str = new char[len + 1];  // 使用new分配足够的空间来保存字符串，然后将新内存的地址赋给str成员。
//    std::strcpy(str, s);
//    num_strings++;
//    cout << num_strings << " : \"" << str << "\" object created.\n";
//}
//
//StringBad::~StringBad()
//{
//    cout << "\"" << str << "\" object delete, ";
//    --num_strings;
//    cout << num_strings << " left.\n";
//    delete[] str;
//}
//
//std::ostream& operator<<(std::ostream& os, const StringBad& st)
//{
//    os << st.str;
//    return os;
//}