#include <iostream>

using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};

void printStu1(Student stu)
{
	stu.name = "cryolin";
	cout << "printStu1 " << stu.name << endl;
}

void printStu2(Student* stu)
{
	stu->name = "cryolin";
	// 结构体指针，通过"->"访问成员
	cout << "printStu2 " << stu->name << endl;
}

// 结构体重使用const的场景：
// 1. 直接传入结构体，会复制全部结构体内容到栈，增大内存占用
// 2. 所以一般使用结构体指针传入
// 3. 但结构体指针传入后，向函数暴露了结构体写入的能力
// 4. 对于不想让函数修改结构体的场景，可以通过在结构体指针前加const的方法
void printStu3(const Student* stu)
{
	// 加入const之后，对stu传参内容的修改会报错
	// stu->name = "cryolin";
	cout << "printStu3 " << stu->name << endl;
}

int main() {
	Student stu = { "colin", 18, 750 };
	Student* p = &stu;

	// 直接传入结构体对象到函数，是无法修改结构体的内容的
	printStu1(stu);
	cout << "stu.name : " << stu.name << endl;	// 打印"colin"

	// 传入stu地址，可以修改结构体内容
	printStu2(p);
	cout << "stu.name : " << stu.name << endl;	// 打印"cryolin

	system("pause");
	return 0;
}