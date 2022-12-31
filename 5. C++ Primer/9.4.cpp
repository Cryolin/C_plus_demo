#include <iostream>
#include "sales.h"

int main()
{
	using namespace sales;
	sale one;
	sale two;
	double quarters[QUARTERS] = { 1.1, 2.2, 3.3, 4.4 };
	setSales(one, quarters, 3);
	showSales(one);

	setSales(two);
	showSales(two);

	return 0;
}