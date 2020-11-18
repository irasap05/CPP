#pragma once
struct Point
{
	int x;
	int y;

	// initialize with 0 0
	Point();

	// initialize with x and y
	Point(int x, int y);
};

struct Rectangle
{
	Point p1;
	Point p2;

	Rectangle(Point p1, Point p2);

	int square();
};

int intersection(Rectangle r1, Rectangle r2);