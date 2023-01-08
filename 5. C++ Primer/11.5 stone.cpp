//#include <iostream>
//#include "11.5 stonewt.h"
//using std::cout;
//void display(const Stonewt& st, int n);
//
//int main()
//{
//	Stonewt incognito = 275;
//	Stonewt wolfe(285.7);
//	Stonewt taft(21, 8);
//
//	cout << "The celebrity weighed ";
//	incognito.setMode(Stonewt::STN);
//	cout << incognito;
//	cout << "The detective weighed ";
//	wolfe.setMode(Stonewt::STN);
//	cout << wolfe;
//	cout << "The President weighed ";
//	taft.setMode(Stonewt::LBS);
//	cout << taft;
//	incognito = 276.8;
//	taft = 325;
//	cout << "After dinner, the celebrity weighed ";
//	incognito.setMode(Stonewt::STN);
//	cout << incognito;
//	cout << "After dinner, the President weighed ";
//	taft.setMode(Stonewt::LBS);
//	cout << taft;
//	display(taft, 2);
//	cout << "The wrestler weighed even more.\n";
//	display(422, 2);
//	cout << "No stone left unearned\n";
//
//
//	return 0;
//}
//
//void display(const Stonewt& st, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Wow! ";
//		cout << st;
//	}
//}