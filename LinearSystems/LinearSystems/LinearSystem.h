#pragma once
#include "Row.h"

struct LinearSystem
{
	// здесь хран€тс€ данные
	Row data[3];

	// печатает систему на экран
	void print();

	// мен€ет строки местами
	void swapRows(int n1, int n2);

	// пр€мой ход метода √аусса
	bool straightGauss();
};