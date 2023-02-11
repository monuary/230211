#include<iostream>
#include"rectangle.h"
using namespace std;

Rectangle::Rectangle(const int& x1, const int& y1, const int& x2, const int& y2)
	:upLeft(x1, y1), lowRight(x2, y2)
{}	//문법상 붙였을 뿐, 위에서 정의를 끝냈기 때문에 비워도 좋다.

void Rectangle::ShowRecInfo()const
{
	cout << "좌 상단: [" << upLeft.GetX() << ", " << upLeft.GetY() << "]" << endl;
	cout << "우 하단: [" << lowRight.GetX() << ", " << lowRight.GetY() << "]" << endl;
}