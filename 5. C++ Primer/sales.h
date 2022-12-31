#ifndef SALES
#define SALES

namespace sales
{
	const int QUARTERS = 4;
	struct sale
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};

	void setSales(sale& s, const double ar[], int n);
	void setSales(sale& s);
	void showSales(const sale& s);
}

#endif
