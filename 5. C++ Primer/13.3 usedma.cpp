//#include <iostream>
//#include <string>
//#include "13.3 dma.h"
//using namespace std;
//const int DMA = 6;
//
//int main(void)
//{
//	using std::cin;
//	using std::cout;
//	using std::endl;
//
//	ABC* p_dma[DMA];
//	char* templabel = new char[50];
//	int temprating;
//
//	char kind;
//
//	for (int i = 0; i < DMA; i++)
//	{
//		cout << "Enter label: ";
//		cin.getline(templabel, 50);
//		cout << "Enter rating: ";
//		cin >> temprating;
//		cout << "Enter 1 for baseDMA or 2 for lacksDMA or 3 for hasDMA: ";
//		while (cin >> kind && kind != '1' && kind != '2' && kind != '3')
//			cout << "Enter either 1 or 2 or 3: ";
//		cin.ignore();      //这里很重要，墨迹了好久才解决呜呜，长记性啊！！！
//		if (kind == '1')
//		{
//			p_dma[i] = new baseDMA(templabel, temprating);
//		}
//		else if (kind == '2')
//		{
//			char tempcolor[40];
//			cout << "Enter color: ";
//			cin.getline(tempcolor, 40);
//			p_dma[i] = new lacksDMA(tempcolor, templabel, temprating);
//		}
//		else
//		{
//			char* tempstyle = new char[20];
//			cout << "Enter style: ";
//			cin.getline(tempstyle, 20);
//			p_dma[i] = new hasDMA(tempstyle, templabel, temprating);
//		}
//		while (cin.get() != '\n')
//			continue;
//	}
//	cout << endl;
//	for (int i = 0; i < DMA; i++)
//	{
//		p_dma[i]->View();
//		cout << endl;
//	}
//
//	for (int i = 0; i < DMA; i++)
//	{
//		delete p_dma[i];
//	}
//	cout << "Done.\n" << endl;
//
//
//
//	system("pause");
//	return 0;
//}