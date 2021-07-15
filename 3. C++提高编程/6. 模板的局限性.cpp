#include <iostream>

using namespace std;

class Person
{
public:
	Person(int age)
	{
		this->age = age;
	}
	int age;
};

// 模板局限性示例2：传入Person对象时，是无法进行大小判断比较的
template<typename T>
const T& getMax(const T& a, const T& b)
{
	return a > b ? a : b;
}

// 为进行＞判断，可以通过运算符重载实现
//bool operator>(const Person& p1, const Person& p2)
//{
//	return p1.age > p2.age;
//}

// 此处介绍另一种方法，通过函数模板具体化实现
// 相应的，还有类模板具体化，会在下面章节介绍
// 具体语法：template<>实现函数模板针对T具体类型的重载
template<> const Person& getMax(const Person& a, const Person& b)
{
	return a.age > b.age ? a : b;
}

ostream& operator<< (ostream& os, const Person& person)
{
	os << person.age;
	return os;
}

int main() {

	Person p = Person(10);
	Person p2 = Person(5);
	cout << getMax(p, p2) << endl;

	system("pause");
	return 0;
}