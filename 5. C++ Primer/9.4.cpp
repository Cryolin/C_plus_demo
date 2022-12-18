#include <iostream>

namespace {
	int a = 1;
}

void show();

int main()
{

	show();
	return 0;
}

void show()
{
	std::cout << a << std::endl;
}
