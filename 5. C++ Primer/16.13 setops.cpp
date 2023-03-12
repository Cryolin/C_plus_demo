//// setops.cpp -- some set operations
//#include <iostream>
//#include <string>
//#include <set>
//#include <algorithm>
//#include <iterator>
//
//int main()
//{
//	using namespace std;
//	const int N = 6;
//	string s1[N] = { "buffoon", "thinkers", "for", "heavy", "can", "for" };
//	string s2[N] = { "metal", "any", "food", "elegant", "deliver","for" };
//
//	set<string> A(s1, s1 + N);
//	set<string> B(s2, s2 + N);
//
//	ostream_iterator<string, char> out(cout, " ");
//	cout << "Set A: ";
//	copy(A.begin(), A.end(), out);
//	cout << endl;
//	cout << "Set B: ";
//	copy(B.begin(), B.end(), out);
//	cout << endl;
//
//	cout << "Union of A and B:\n";
//	set_union(A.begin(), A.end(), B.begin(), B.end(), out);
//	cout << endl;
//
//	cout << "Intersection of A and B:\n";
//	set_intersection(A.begin(), A.end(), B.begin(), B.end(), out);
//	//set_intersection查找两个集合的交集
//	cout << endl;
//
//	cout << "Difference of A and B:\n";
//	set_difference(A.begin(), A.end(), B.begin(), B.end(), out);
//	//set_difference查找两个集合的差
//	cout << endl;
//
//	set<string> C;
//	cout << "Set C:\n";
//	set_union(A.begin(), A.end(), B.begin(), B.end(),
//		insert_iterator<set<string> >(C, C.begin()));
//	copy(C.begin(), C.end(), out);
//	cout << endl;
//
//	string s3("grungy");
//	C.insert(s3);
//	cout << "Set C after insertion:\n";
//	copy(C.begin(), C.end(), out);
//	cout << endl;
//
//	cout << "Showing a range:\n";
//	copy(C.lower_bound("ghost"), C.upper_bound("spook"), out);
//	//lower_bound将键作为参数并返回一个迭代器，该迭代器指向集合中第一个不小于键参数的成员
//	//upper_bound将键作为参数并返回一个迭代器，该迭代器指向集合中第一个大于键参数的成员
//	cout << endl;
//	// cin.get();
//	return 0;
//}