//#include "13.2 cd.h"
//#include <iostream>
//using namespace std;
//#include <cstring>
//#include <cstdlib>
//Cd::Cd(const char* s1, const char* s2, int n, double x)
//{
//	performers = new char[strlen(s1) + 1];
//	strcpy(performers, s1);
//	label = new char[strlen(s2) + 1];
//	strcpy(label, s2);
//	selections = n;
//	playtime = x;
//}
//Cd::Cd(const Cd& d)
//{
//	performers = new char[strlen(d.performers) + 1];
//	strcpy(performers, d.performers);
//	label = new char[strlen(d.label) + 1];
//	strcpy(label, d.label);
//	selections = d.selections;
//	playtime = d.playtime;
//}
//Cd::Cd()
//{
//	performers = new char[5];
//	strcpy(performers, "null");
//	label = new char[5];
//	strcpy(label, "null");
//	selections = 0;
//	playtime = 0.0;
//}
//Cd::~Cd()
//{
//	delete[] performers;
//	delete[] label;
//}
//void Cd::Report() const //reports all CD data
//{
//	cout << "Performers: " << performers << endl;
//	cout << "Label: " << label << endl;
//	cout << "There are " << selections << " selections and lasts " << playtime << " minutes.\n";
//}
//Cd& Cd::operator=(const Cd& d)
//{
//	performers = new char[strlen(d.performers) + 1];
//	strcpy(performers, d.performers);
//	label = new char[strlen(d.label) + 1];
//	strcpy(label, d.label);
//	selections = d.selections;
//	playtime = d.playtime;
//	return *this;
//}
//
//Classic::Classic(const char* m, const char* s1, const  char* s2, int n, double x) :Cd(s1, s2, n, x)
//{
//	mainworks = new char[strlen(m) + 1];
//	strcpy(mainworks, m);
//}
//Classic::Classic(const char* m, const Cd& rs) : Cd(rs)
//{
//	mainworks = new char[strlen(m) + 1];
//	strcpy(mainworks, m);
//}
//Classic::Classic() : Cd()
//{
//	mainworks = new char[5];
//	strcpy(mainworks, "null");
//}
//Classic::~Classic()
//{
//	delete[] mainworks;
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
//	mainworks = new char[strlen(d.mainworks) + 1];
//	strcpy(mainworks, d.mainworks);
//	return *this;
//}