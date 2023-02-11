#include<iostream>
#include"point.h"
using namespace std;

Point::Point(const int& xpos, const int& ypos)	//Ŭ������ �̸��������� ���δ�.
{
	x = xpos;
	y = ypos;
}

int Point::GetX()const { return x; }
int Point::GetY()const { return y; }

bool Point::SetX(int xpos)	//�� �̷� ���踦 �ߴ��� �𸣰�����, �ϴ� �д�.
{
	if (0 > xpos || xpos > 100)
	{
		cout << "��� ������ �� ���� : x" << endl;
		return false;
	}
	x = xpos;
	return true;
}
bool Point::SetY(int ypos)
{
	if (0 > ypos || ypos > 100)
	{
		cout << "��� ������ �� ���� : y" << endl;
		return false;
	}
	y = ypos;
	return true;
}