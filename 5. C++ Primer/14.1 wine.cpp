//#include "14.1 wine.h"
//
//template<class T1, class T2>
//void Pair<T1, T2>::set(const T1& yr, const T2& bot)
//{
//	a = yr;
//	b = bot;
//}
//
//template<class T1, class T2>
//int Pair<T1, T2>::sum() const
//{
//	return b.sum();
//}
//
//template<class T1, class T2>
//void Pair<T1, T2>::Show(int y) const
//{
//	using std::cout;
//	using std::endl;
//	for (int i = 0; i < y; i++)
//	{
//		cout << "\t\t" << a[i] << "\t\t" << b[i] << endl;
//	}
//}
//
//Wine::Wine(const char* l, int y, const int yr[], const int bot[])
//{
//	wine_name = l;
//	years = y;
//	pair.set(std::valarray<int>(yr, years), std::valarray<int>(bot, years));
//}
//
//Wine::Wine(const char* l, int y)
//{
//	wine_name = l;
//	years = y;
//}
//
//void Wine::GetBottles()
//{
//	using std::cout;
//	using std::cin;
//	std::valarray<int> yr(years), bot(years);
//	cout << "Enter" << wine_name << " data for " << years << " year(s):\n";
//	for (int i = 0; i < years; i++)
//	{
//		cout << "Enter year: ";
//		cin >> yr[i];
//		cout << "Enter bottles for that year: ";
//		cin >> bot[i];
//	}
//	pair.set(yr, bot);
//}
//
//std::string& Wine::Label()
//{
//	return wine_name;
//}
//
//int Wine::sum()const
//{
//	return pair.sum();
//}
//
//void Wine::Show()const
//{
//	using std::cout;
//	cout << "Wine: " << wine_name << std::endl;
//	cout << "\t\tYear\t\tBottles\n";
//	pair.Show(years);
//}