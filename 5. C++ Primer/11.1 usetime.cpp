//#include <iostream>
//#include <fstream>
//#include "11.1 mytime.h"
//
//int main()
//{
//	using std::cout;
//	using std::endl;
//	using std::ofstream;
//	Time planning;
//	Time coding(2, 40);
//	Time fixing(5, 55);
//	Time total;
//
//	ofstream outfile;
//	outfile.open("11.1 usetime.txt");
//
//	outfile << "planning time = ";
//	planning.Show(outfile);
//	outfile << endl;
//
//	outfile << "coding time = ";
//	coding.Show(outfile);
//	outfile << endl;
//
//	outfile << "fixing time = ";
//	fixing.Show(outfile);
//	outfile << endl;
//
//	total = coding + fixing;
//	outfile << "coding + fixing = ";
//	total.Show(outfile);
//	outfile << endl;
//
//	Time morefixing(3, 28);
//	outfile << "more fixing time = ";
//	morefixing.Show(outfile);
//	outfile << endl;
//	total = morefixing.operator+(total);
//	outfile << "morefixing.operator+(total) = ";
//	total.Show(outfile);
//	outfile << endl;
//
//	return 0;
//}