//#include <iostream>
//using namespace std;
//
//const int LENGTH = 50;
//
//struct CandyBar
//{
//	char name[LENGTH];
//	double weight;
//	int hot;
//};
//
//void create_candy_bar(CandyBar& candyBar,
//	const char name[] = "Millennimu Munch", 
//	double weight = 2.85, 
//	int hot = 350);
//
//void show_candy_bar(CandyBar& candyBar);
//
//int main()
//{
//	CandyBar candyBar = {};
//	create_candy_bar(candyBar);
//	show_candy_bar(candyBar);
//
//	create_candy_bar(candyBar, "adh", 1.3, 20);
//	show_candy_bar(candyBar);
//
//	return 0;
//}
//
//void create_candy_bar(CandyBar& candyBar, const char name[], double weight, int hot)
//{
//	strcpy(candyBar.name, name);
//	candyBar.weight = weight;
//	candyBar.hot = hot;
//}
//
//void show_candy_bar(CandyBar& candyBar)
//{
//	cout << candyBar.name << ", " << candyBar.weight << ", " << candyBar.hot << ".\n";
//}