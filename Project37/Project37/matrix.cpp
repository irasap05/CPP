#include "matrix.h"
#include <iostream>

using namespace std;

//contructors
matrix::matrix(int size)
{
	this->size = size;
	data = new double* [size];
	for (int i = 0; i < size; ++i)
	{
		data[i] = new double[size];
	}
}

matrix& matrix::operator=(matrix const& m)
{
	this->size = m.size;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			this->data[i][j] = m.data[i][j];
		}
	}
	return *this;
}

// input
void matrix::inFromKeyBoard()
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			cin >> data[i][j];
		}
	}
}

// output to console
void matrix::print()
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			cout << data[i][j] << " ";
		}
		cout << endl;
	}
}

// others

// определитель матрицы
double matrix::det()
{
	return 0;
}

void matrix::swap(double& x, double& y)
{
	double temp = x;
	x = y;
	y = temp;
}

// swap rows
void matrix::swapRows(int const i, int const j)
{
	for (int k = 0; k < size; ++k)
	{
		swap(this->data[i][k], this->data[j][k]);
	}
}

// row down
void matrix::rowDown(int const i)
{
	for (int k = i + 1; k < size; ++k)
	{
		this->swapRows(k, k - 1);
	}
}

// swap cols
void matrix::swapCols(int const i, int const j)
{
	for (int k = 0; k < size; ++k)
	{
		swap(this->data[k][i], this->data[k][j]);
	}
}

// col right
void matrix::colRight(int const i)
{
	for (int k = i + 1; k < size; ++k)
	{
		this->swapCols(k, k - 1);
	}
}

// алгебраическое дополнение
matrix matrix::alg(int i, int j)
{
	matrix result(size - 1);
	matrix m(size);
	m = *this;
	m.rowDown(i);
	m.colRight(j);
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size - 1; ++j)
		{
			result.data[i][j] = m.data[i][j];
		}
	}
	return result;
}