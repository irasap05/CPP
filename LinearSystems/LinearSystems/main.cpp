#include <iostream>
#include "Row.h"
#include "LinearSystem.h"
#include "Matrix.h"

using namespace std;

int main()
{
	Matrix m(3);

	m.fromKeyboard();
	
	Vector v(3);
	v.fromKeyboard();
	m.swapColumn(1, v).print();
	m.print();
	return 0;
}