//#include "13.3 dma.h"
//#include <cstring>
//
//
////Baseclass methods
//baseDMA::baseDMA(const char* l, int r)
//{
//	label = new char[std::strlen(l) + 1];
//	std::strcpy(label, l);
//	rating = r;
//}
//baseDMA::baseDMA(const baseDMA& rs)
//{
//	label = new char[std::strlen(rs.label) + 1];
//	std::strcpy(label, rs.label);
//	rating = rs.rating;
//}
//baseDMA::~baseDMA()
//{
//	delete[] label;
//}
//baseDMA& baseDMA::operator=(const baseDMA& rs)
//{
//	if (this == &rs)
//		return *this;
//	delete[] label;
//	label = new char[std::strlen(rs.label) + 1];
//	strcpy(label, rs.label);
//	rating = rs.rating;
//	return *this;
//}
//std::ostream& operator<<(std::ostream& os, const baseDMA& rs)
//{
//	os << "Label: " << rs.label << std::endl;
//	os << "Rating: " << rs.rating << std::endl;
//	return os;
//}
//void baseDMA::View()
//{
//	std::cout << "Label: " << label << std::endl;
//	std::cout << "Rating: " << rating << std::endl;
//}
//
////lacksDMA methods
//lacksDMA::lacksDMA(const char* c, const char* l, int r) :baseDMA(l, r)
//{
//	std::strncpy(color, c, 39); //用于指定长度的字符串赋值到字符数组中
//	color[39] = '\0';
//}
//lacksDMA::lacksDMA(const char* c, const baseDMA& rs) : baseDMA(rs)
//{
//	std::strncpy(color, c, COL_LEN - 1);
//	color[COL_LEN - 1] = '\0';
//}
//std::ostream& operator<<(std::ostream& os, const lacksDMA& ls)
//{
//	os << (const baseDMA&)ls;
//	os << "Color: " << ls.color << std::endl;
//	return os;
//}
//void lacksDMA::View()
//{
//	baseDMA::View();
//	std::cout << "Color: " << color << std::endl;
//}
//
////hasDMA mmethods
//hasDMA::hasDMA(const char* s, const char* l, int r) :baseDMA(l, r)
//{
//	style = new char[std::strlen(s) + 1];
//	std::strcpy(style, s);
//}
//hasDMA::hasDMA(const char* s, const baseDMA& rs) : baseDMA(rs)
//{
//	style = new char[std::strlen(s) + 1];
//	std::strcpy(style, s);
//}
//hasDMA::hasDMA(const hasDMA& hs) : baseDMA(hs)
//{
//	style = new char[std::strlen(hs.style) + 1];
//	std::strcpy(style, hs.style);
//}
//hasDMA::~hasDMA()
//{
//	delete[]style;
//}
//hasDMA& hasDMA::operator= (const hasDMA& hs)
//{
//	if (this == &hs)
//		return *this;
//	baseDMA::operator=(hs);
//	delete[]style;
//	style = new char[std::strlen(hs.style) + 1];
//	std::strcpy(style, hs.style);
//	return *this;
//}
//std::ostream& operator<<(std::ostream& os, const hasDMA& hs)
//{
//	os << (const baseDMA&)hs;
//	os << "Style: " << hs.style << std::endl;
//	return os;
//}
//void hasDMA::View()
//{
//	baseDMA::View();
//	std::cout << "Style: " << style << std::endl;
//}