//#ifndef PRIMERPLUS_STRINGBAD_H
//#define PRIMERPLUS_STRINGBAD_H
//#include <iostream>
//class StringBad
//{
//private:
//	char* str;      				// 类声明没有为字符串本身分配存储空间
//	int len;
//	static int num_strings; 		// 无论创建了多少对象，程序都只创建一个静态类变量副本。
//public:
//	// 在构造函数中使用new来为字符串分配空间。
//	StringBad();                    // 默认构造函数
//	StringBad(const char* s);      // 自定义构造函数
//	StringBad(const StringBad& s); // 复制构造函数
//	StringBad& operator=(const StringBad& st);    // 赋值构造函数
//	~StringBad();
//
//	friend std::ostream& operator<<(std::ostream& os, const StringBad& st);
//};
//#endif