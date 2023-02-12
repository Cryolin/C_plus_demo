//#ifndef _WINE_H_
//#define _WINE_H_
//
//// pairs.cpp -- defining and using a Pair template
//#include <iostream>
//#include <string>
//#include <valarray>
//
//template <class T1, class T2>
//class Pair
//{
//private:
//    T1 a;
//    T2 b;
//public:
//    Pair(const T1& aval, const T2& bval) : a(aval), b(bval) {}
//    Pair() {}
//    void set(const T1& yr, const T2& bot);
//    int sum() const;
//    void Show(int y) const;
//};
//
//class Wine
//{
//private:
//    std::string wine_name;
//    Pair<std::valarray<int>, std::valarray<int>> pair;
//    int years;
//public:
//    Wine(const char* l, int y, const int yr[], const int bot[]);
//    Wine(const char* l, int y);
//    void GetBottles();
//    std::string& Label();
//    int sum()const;
//    void Show()const;
//};
//
//#endif _WINE_H_