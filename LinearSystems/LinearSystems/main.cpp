#include <iostream>
#include "Matrix.h"

using namespace std;

void memory()
{
	int** a = new int* [10000];
	for (int i = 0; i < 10000; ++i)
	{
		a[i] = new int[10000];
	}

	cout << "by rows:" << endl;
	for (int r = 0; r < 10000; ++r)
	{
		for (int c = 0; c < 10000; ++c)
		{
			a[r][c] = 0;
		}
	}
	cout << "end by rows" << endl;

	cout << "by columns:" << endl;
	for (int r = 0; r < 10000; ++r)
	{
		for (int c = 0; c < 10000; ++c)
		{
			a[c][r] = 0;
		}
	}

	cout << "end by columns" << endl;

	for (int i = 0; i < 10000; ++i)
	{
		delete[] a[i];
	}
	delete[] a;
}

int LS()
{
	int amountOfVariables = 0;
	cout << "input amount of variables: ";
	cin >> amountOfVariables;

	Matrix coefficientMatrix(amountOfVariables);
	cout << "input coefficient matrix:" << endl;
	coefficientMatrix.inputFromKeyboard();

	Vector freeTerms(amountOfVariables);
	cout << "input free terms vector:" << endl;
	freeTerms.inputFromKeyboard();

	double determinant = coefficientMatrix.det();
	if (determinant == 0)
	{
		cout << "I can't solve";
		return 0;
	}

	for (int i = 0; i < amountOfVariables; ++i)
	{
		cout << "x" << i << " = " << coefficientMatrix.swapColumnToVector(i, freeTerms).det() / determinant << "; ";
	}

	return 0;
}

int main()
{
	Matrix m(2);
	Matrix n(2);
	n.inputFromKeyboard();
	m = n;
	n.print();

	return 0;
}