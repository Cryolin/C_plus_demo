//// string1.cpp -- String class methods
//#include <cstring> // string.h for some
//#include <cctype>
//#include "12.2 string2.h" // includes <iostream>
//using std::cin;
//using std::cout;
//// initializing static class member
//int String::num_strings = 0;
//// static method
//int String::HowMany()
//{
//    return num_strings;
//}
//// class methods
//String::String(const char* s) // construct String from C string
//{
//    len = std::strlen(s); // set size
//    str = new char[len + 1]; // allot storage
//    std::strcpy(str, s); // initialize pointer
//    num_strings++; // set object count
//}
//String::String() // default constructor
//{
//    len = 4;
//    str = new char[1];
//    str[0] = '\0'; // default string
//    num_strings++;
//}
//String::String(const String& st)
//{
//    num_strings++; // handle static member update
//    len = st.len; // same length
//    str = new char[len + 1]; // allot space
//    std::strcpy(str, st.str); // copy string to new location
//}
//String::~String() // necessary destructor
//{
//    --num_strings; // required
//    delete[] str; // required
//}
//// overloaded operator methods
//// assign a String to a String
//String& String::operator=(const String& st)
//{
//    if (this == &st)
//        return *this;
//    delete[] str;
//    len = st.len;
//    str = new char[len + 1];
//    std::strcpy(str, st.str);
//    return *this;
//}
//// assign a C string to a String
//String& String::operator=(const char* s)
//{
//    delete[] str;
//    len = std::strlen(s);
//    str = new char[len + 1];
//    std::strcpy(str, s);
//    return *this;
//}
//// read-write char access for non-const String
//char& String::operator[](int i)
//{
//    return str[i];
//}
//// read-only char access for const String
//const char& String::operator[](int i) const
//{
//    return str[i];
//}
//// overloaded operator friends
//bool operator<(const String& st1, const String& st2)
//{
//    return (std::strcmp(st1.str, st2.str) < 0);
//}
//bool operator>(const String& st1, const String& st2)
//{
//    return st2 < st1;
//}
//bool operator==(const String& st1, const String& st2)
//{
//    return (std::strcmp(st1.str, st2.str) == 0);
//}
//// simple String output
//ostream& operator<<(ostream& os, const String& st)
//{
//    os << st.str;
//    return os;
//}
//// quick and dirty String input
//// 重载>>运算符提供了一种将键盘输入行读入到String对象中的简单方法。
//// 它假定输入的字符数不多于String::CINLIM的字符数，并丢弃多余的字符。
//// 在if条件下，如果由于某种原因
//// （如到达文件尾或get（char *, int）读取的是一个空行）导致输入失败，istream对象的值将置为 false。
//istream& operator>>(istream& is, String& st)
//{
//    char temp[String::CINLIM];
//    is.get(temp, String::CINLIM);
//    if (is)
//        st = temp;
//    while (is && is.get() != '\n')
//        continue;
//    return is;
//}
//
//String String::operator+(const String& st)
//{
//    String str;
//    delete[] str.str;
//    str.len = len + st.len;
//    str.str = new char[str.len + 1];
//    strcpy(str.str, this->str);
//    strcat(str.str, st.str);
//    return str;
//}
//
//String operator+(const char* str1, const String& str2)
//{
//    String str;
//    delete[] str.str;
//    str.len = strlen(str1) + str2.len;
//    str.str = new char[str.len + 1];
//    strcpy(str.str, str1);
//    strcat(str.str, str2.str);
//    return str;
//}
//
//void String::stringlow()
//{
//    if (len == 0)
//    {
//        return;
//    }
//    for (int i = 0; i < len; i++)
//    {
//        str[i] = tolower(str[i]);
//    }
//}
//
//void String::stringup()
//{
//    if (len == 0)
//    {
//        return;
//    }
//    for (int i = 0; i < len; i++)
//    {
//        str[i] = toupper(str[i]);
//    }
//}
//
//int String::has(char ch)
//{
//    if (len == 0)
//    {
//        return 0;
//    }
//    int result = 0;
//    for (int i = 0; i < len; i++)
//    {
//        if (str[i] == ch)
//        {
//            result++;
//        }
//    }
//    return result;
//}