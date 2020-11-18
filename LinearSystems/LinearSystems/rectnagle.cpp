#include "rectangle.h"
#include <cmath>

using namespace std;

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

Rectangle::Rectangle(Point p1, Point p2)
{
	this->p1 = p1;
	this->p2 = p2;
}

int Rectangle::square()
{
	return abs(p1.x - p2.x) * abs(p1.y - p2.y);
}

int intersection(Rectangle r1, Rectangle r2)
{
	return 0;
}