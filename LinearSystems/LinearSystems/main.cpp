#include <iostream>
#include "Row.h"
#include "LinearSystem.h"

using namespace std;

int main()
{
	Row r1, r2;
	for (int i = 0; i < 4; i++)
	{
		r1.data[i] = i * i;
		r2.data[i] = i + 1;
	}

	Row r3 = r1 + r2;

	LinearSystem s;

	s.data[0] = r1;
	s.data[1] = r2;
	s.data[2] = r3;
	
	s.print();
	s.straightGauss();
	s.print();
	return 0;
}