// 防止被多次include(多次include会导致多次编译头文件)
#pragma once
#include <iostream>

using namespace std;

class Point
{
public:
	void setX(int x);
	void setY(int y);

private:
	int m_x;
	int m_y;
};