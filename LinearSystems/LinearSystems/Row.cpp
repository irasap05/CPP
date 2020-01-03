#include "Row.h"
#include <iostream>

using namespace std;

// выводит строку на консоль
void Row::print()
{
	cout << "(";
	cout << data[0];
	for (int i = 1; i < 4; ++i)
	{
		cout << "; " << data[i];
	}
	cout << ")" << endl;
}

// складывает строки
Row operator+(Row r1, Row r2)
{
	Row sum;
	for (int i = 0; i < 4; ++i)
	{
		sum.data[i] = r1.data[i] + r2.data[i];
	}
	return sum;
}

// умножает число на строку
Row operator*(double alpha, Row r)
{
	Row product;
	for (int i = 0; i < 4; ++i)
	{
		product.data[i] = alpha * r.data[i];
	}
	return product;
}

// умножает строку на число
Row operator*(Row r, double alpha)
{
	return alpha * r;
}

// вычитает строки
Row operator-(Row r1, Row r2)
{
	return r1 + (-1) * r2;
}