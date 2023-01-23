//#include <iostream>
//#include "12.1 cow.h"
//
//Cow::Cow()
//{
//	name[0] = '\0';
//	hobby = new char[1];
//	hobby[0] = '\0';
//	weight = 0.0;
//}
//
//Cow::Cow(const char* nm, const char* ho, double wt)
//{
//	strcpy(name, nm);
//	int len = strlen(ho);
//	hobby = new char[len + 1];
//	strcpy(hobby, ho);
//	weight = wt;
//}
//
//Cow::Cow(const Cow& c)
//{
//	strcpy(name, c.name);
//	int len = strlen(c.hobby);
//	hobby = new char[len + 1];
//	strcpy(hobby, c.hobby);
//	weight = c.weight;
//}
//
//Cow::~Cow()
//{
//	delete[] hobby;
//}
//
//Cow& Cow::operator=(const Cow& c)
//{
//	if (this == &c)
//		return *this;
//	delete[] hobby;
//	strcpy(name, c.name);
//	int len = strlen(c.hobby);
//	hobby = new char[len + 1];
//	strcpy(hobby, c.hobby);
//	weight = c.weight;
//	return *this;
//}
//
//void Cow::ShowCow() const
//{
//	using std::cout;
//	using std::endl;
//	cout << "name is " << name << 
//		", hobby is " << hobby << ", weight is " << weight << endl;;
//}