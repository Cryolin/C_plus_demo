#include <iostream>
#include <mutex>
#include <vector>

typedef std::vector<int> intvec;
using intvec = std::vector<int>;	//这两个写法是等价的

int main()
{
    intvec iv = { 1,2,3,4,5 };

    system("pause");
}