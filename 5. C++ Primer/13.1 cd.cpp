//#include "13.1 cd.h"
//#include <iostream>
//using namespace std;
//#include <cstring>
//#include <cstdlib>
//Cd::Cd(const char* s1, const char* s2, int n, double x)
//{
//	strncpy(performers, s1, 49);
//	performers[49] = '\0';
//	strncpy(label, s2, 19);
//	label[19] = '\0';
//	selections = n;
//	playtime = x;
//}
//Cd::Cd(const Cd& d)
//{
//	strncpy(performers, d.performers, 49);
//	performers[49] = '\0';
//	strncpy(label, d.performers, 19);
//	label[19] = '\0';
//	selections = d.selections;
//	playtime = d.playtime;
//}
//Cd::Cd()
//{
//	strcpy(performers, "null");
//	strcpy(label, "null");
//	selections = 0;
//	playtime = 0.0;
//}
//Cd::~Cd()
//{
//
//}
//void Cd::Report() const //reports all CD data
//{
//	cout << "Performers: " << performers << endl;
//	cout << "Label: " << label << endl;
//	cout << "There are " << selections << " selections and lasts " << playtime << " minutes.\n";
//}
//Cd& Cd::operator=(const Cd& d)
//{
//	strncpy(performers, d.performers, 49);
//	performers[49] = '\0';
//	strncpy(label, d.performers, 19);
//	label[19] = '\0';
//	selections = d.selections;
//	playtime = d.playtime;
//	return *this;
//}
//
//Classic::Classic(const char* m, const char* s1, const  char* s2, int n, double x) :Cd(s1, s2, n, x)
//{
//	strncpy(mainworks, m, 49);
//	mainworks[49] = '\0';
//}
//Classic::Classic(const char* m, const Cd& rs) : Cd(rs)
//{
//	strncpy(mainworks, m, 49);
//	mainworks[49] = '\0';
//}
//Classic::Classic() : Cd()
//{
//	strcpy(mainworks, "null");
//}
//Classic::~Classic()
//{
//
//}
//void Classic::Report() const
//{
//	Cd::Report();
//	cout << "The main works of this disk are " << mainworks << endl;
//}
//Classic& Classic::operator=(const Classic& d)
//{
//	if (this == &d)
//		return *this;
//	Cd::operator=(d);
//	strncpy(mainworks, d.mainworks, 49);
//	mainworks[49] = '\0';
//	return *this;
//}