//#include "14.1 studentc.h"
//
//using std::ostream;
//using std::endl;
//using std::istream;
//using std::string;
//
////public methods
//double Student::Average() const
//{
//	if (Scores.size() > 0)
//		return Scores.sum() / Scores.size();
//	else
//		return 0;
//}
//
//const string& Student::Name() const
//{
//	return name;
//}
//
//double& Student::operator[](int i)
//{
//	return Scores[i];
//}
//
//double Student::operator[](int i) const
//{
//	return Scores[i];
//}
//
//// private method
//ostream& Student::arr_out(ostream& os) const
//{
//	int i;
//	int lim = Scores.size();
//	if (lim > 0)
//	{
//		for (i = 0; i < lim; i++)
//		{
//			os << Scores[i] << " ";
//			if (i % 5 == 4)
//				os << endl;
//		}
//		if (i % 5 != 0)
//			os << endl;
//	}
//	else
//		os << " empty array ";
//	return os;
//}
//
//// friends
//// use string version of operator>>()
//istream& operator>>(istream& is, Student& stu)
//{
//	is >> stu.name;
//	return is;
//}
//
//// use string friend getline(ostream &, const string &)
//istream& getline(istream& is, Student& stu)
//{
//	getline(is, stu.name);
//	return is;
//}
//
//// use string version of operator<<()
//ostream& operator<<(ostream& os, const Student& stu)
//{
//	os << "Scores for " << stu.name << ":\n";
//	stu.arr_out(os);
//	return os;
//}