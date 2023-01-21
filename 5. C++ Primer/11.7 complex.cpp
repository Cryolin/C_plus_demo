//#include "11.7 complex.h"
//
//Complex::Complex()
//{
//	real = 0.0;
//	imaginary = 0.0;
//}
//
//Complex::Complex(double r, double i)
//{
//	real = r;
//	imaginary = i;
//}
//
//Complex::~Complex()
//{
//}
//
//Complex Complex::operator~() const
//{
//	return Complex(real, -imaginary);
//}
//
//Complex Complex::operator+(const Complex& complex) const
//{
//	return Complex(real + complex.real, imaginary + complex.imaginary);
//}
//
//Complex Complex::operator-(const Complex& complex) const
//{
//	return Complex(real - complex.real, imaginary - complex.imaginary);
//}
//
//Complex Complex::operator*(const Complex& complex) const
//{
//	return Complex(real * complex.real - imaginary * complex.imaginary, 
//		real * complex.imaginary + imaginary * complex.real);
//}
//
//Complex Complex::operator*(double n) const
//{
//	return Complex(real * n, imaginary * n);
//}
//
//Complex operator*(double n, const Complex& complex)
//{
//	return complex * n;
//}
//
//ostream& operator<<(ostream& os, const Complex& complex)
//{
//	os << " (" << complex.real << ", " << complex.imaginary << "i)";
//	return os;
//}
//
//istream& operator>>(istream& is, Complex& complex)
//{
//	double real, imaginary;
//	cout << "real: ";
//	if (is >> complex.real)
//	{
//		cout << "imaginary: ";
//		is >> complex.imaginary;
//	}
//	return is;
//}