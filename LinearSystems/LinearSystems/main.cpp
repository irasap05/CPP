#include <iostream>
#include "Row.h"
#include "LinearSystem.h"

using namespace std;

int main()
{
	Row r1(2, 10, -3, 38);
	Row r2(-3, -24, 5, -86);
	Row r3(1, 3, -5, 27);
	LinearSystem s(r1, r2, r3);
	s.print();
	s.StraightGauss();
	s.print();
	s.ReverseGauss();
	s.print();
	return 0;
}