//#ifndef STUDENTC_H_
//#define STUDENTC_H_
//
//#include <iostream>
//#include <string>   
//#include <valarray>
//
//class Student
//{
//private:
//	typedef std::valarray<double> ArrayDb;
//	std::string name;
//	ArrayDb Scores;
//	// private method for Scores output
//	std::ostream& arr_out(std::ostream& os) const;
//public:
//	Student() : name("Null Student"), Scores() {}
//	explicit Student(const std::string& s)
//		: name(s), Scores() {}
//	explicit Student(int n) : name("Nully"), Scores(n) {}
//	Student(const std::string& s, int n)
//		: name(s), Scores(n) {}
//	Student(const std::string& s, const ArrayDb& a)
//		: name(s), Scores(a) {}
//	Student(const char* str, const double* pd, int n)
//		: name(str), Scores(pd, n) {}
//	~Student() {}
//	double Average() const;
//	const std::string& Name() const;
//	double& operator[](int i);
//	double operator[](int i) const;
//	// friends
//	// input
//	friend std::istream& operator>>(std::istream& is,
//		Student& stu);
//	friend std::istream& getline(std::istream& is,
//		Student& stu);
//	// output
//	friend std::ostream& operator<<(std::ostream& os,
//		const Student& stu);
//};
//#endif