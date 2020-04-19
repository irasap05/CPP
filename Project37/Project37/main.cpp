#include <iostream>
#include "list.h"

using namespace std;

int main()
{
	List l;
	for (int i = 1; i <= 10; ++i)
	{
		l.add(i);
	}
	l.print();
	l.cycleShiftRight();
	l.print();
	return 0;
}