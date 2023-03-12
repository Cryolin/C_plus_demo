//// inserts.cpp -- copy() and insert iterators
//#include <iostream>
//#include <string>
//#include <iterator>
//#include <vector>
//#include <algorithm>
//
//void output(const std::string& s) { std::cout << s << " "; }
//
//int main()
//{
//	using namespace std;
//	string s1[4] = { "fine", "fish", "fashion", "fate" };
//	string s2[2] = { "busy", "bats" };
//	string s3[2] = { "silly", "singers" };
//	vector<string> words(4);
//	copy(s1, s1 + 4, words.begin());
//	for_each(words.begin(), words.end(), output);
//	cout << endl;
//
//	// construct anonymous back_insert_iterator object
//	copy(s2, s2 + 2, back_insert_iterator<vector<string> >(words));
//	//back_insert_iterator只能用于允许在尾部快速插入的容器
//	//front_insert_iterator只能用于允许在起始位置做时间固定插入的容器类型
//	for_each(words.begin(), words.end(), output);
//	cout << endl;
//
//	// construct anonymous insert_iterator object
//	copy(s3, s3 + 2, insert_iterator<vector<string> >(words, words.begin()));
//	//在其实位置插入s3的内容
//	for_each(words.begin(), words.end(), output);
//	cout << endl;
//	// cin.get();
//	return 0;
//}