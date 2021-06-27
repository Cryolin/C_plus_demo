//#include <iostream>
//
//using namespace std;
//
//// 加号运算符重载
//class WeightCal
//{
//	friend void test();
//	friend WeightCal operator+(WeightCal w1, WeightCal w2);
//public:
//	WeightCal() {}
//
//	WeightCal(int weight)
//	{
//		this->weight = weight;
//	}
//
//	// 加号运算符重载方法01：使用成员函数
//	// 需要链式调用，返回值不能是void
//	// 返回一个新的副本，返回值不能是引用或指针
//	WeightCal operator+(const WeightCal& weightCal)
//	{
//		WeightCal temp;
//		temp.weight = weightCal.weight + weight;
//		return temp;
//	}
//private:
//	int weight;
//};
//
//// 加号运算符重载方法02：使用全局函数
//WeightCal operator+(const WeightCal w1, const WeightCal w2)
//{
//	WeightCal temp;
//	temp.weight = w1.weight + w2.weight;
//	return temp;
//}
//
//void test()
//{
//	WeightCal w1(100);
//	WeightCal w2(200);
//	WeightCal w3 = w1 + w2;
//	cout << "w3.weight ：" << w3.weight << endl;
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}