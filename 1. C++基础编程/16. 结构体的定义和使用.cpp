//#include <iostream>
//
//using namespace std;
//
//// 结构体定义
//struct Student
//{
//	string name;
//	int age;
//	int score;
//}s6; // 创建结构体变量方法3
//
//int main() {
//	// 创建结构体变量的三种方法
//	
//	// 1. struct 结构体名 变量名
//	struct Student s1;
//	// Student s1; 创建时，struct是可以省略的
//	s1.name = "张三";	// 结构体变量通过"."访问成员
//	s1.age = 18;
//	s1.score = 100;
//
//
//	// 2. struct 结构体名 变量名 = {成员1值，成员2值...}
//	Student s2 = { "李四", 19, 80 };
//
//	// 可以只初始化部分内容，但必须按定义的顺序初始化，如下s5的方式报错
//	Student s3 = { "12" };
//	Student s4 = { "sf", 20 };
//	//Student s5 = { 30 };
//
//	// 3. 在定义结构体时顺便创建变量
//	s6.name = "王五";
//	s6.age = 20;
//	s6.score = 60;
//
//	system("pause");
//	return 0;
//}