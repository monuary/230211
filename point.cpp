#include<iostream>
#include"point.h"
using namespace std;

Point::Point(const int& xpos, const int& ypos)	//클래스는 이름공간으로 묶인다.
{
	x = xpos;
	y = ypos;
}

int Point::GetX()const { return x; }
int Point::GetY()const { return y; }

bool Point::SetX(int xpos)	//왜 이런 설계를 했는지 모르겠지만, 일단 둔다.
{
	if (0 > xpos || xpos > 100)
	{
		cout << "벗어난 범위의 값 전달 : x" << endl;
		return false;
	}
	x = xpos;
	return true;
}
bool Point::SetY(int ypos)
{
	if (0 > ypos || ypos > 100)
	{
		cout << "벗어난 범위의 값 전달 : y" << endl;
		return false;
	}
	y = ypos;
	return true;
}