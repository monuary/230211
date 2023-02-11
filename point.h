#ifndef __POINT_H_
#define __POINT_H_

class Point
{
	int x;
	int y;
public:
	Point(const int& xpos, const int& ypos);	//rectangle과 연계하기 위해 참조자를 쓴다.
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};

#endif // !__POINT_H_

