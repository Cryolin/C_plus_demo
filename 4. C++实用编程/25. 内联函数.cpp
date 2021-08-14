#include <iostream>
using namespace std;

inline const char* num_check(int v)
{
    return (v % 2 > 0) ? "Ææ" : "Å¼";
}

int main()
{
    int i;
    for (i = 0; i < 100; i++)
    {
        cout << i << " ÊÇ " << num_check(i) << " Êý" << endl;
    }

	system("pause");
}