#include "Matrix.h"
#include <iostream>

using namespace std;

//contructors
Matrix::Matrix(int size)
{
	this->size = size;
	data = new double* [size];
	for (int i = 0; i < size; ++i)
	{
		data[i] = new double[size];
	}
}

Matrix& Matrix::operator=(Matrix const& m)
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
void Matrix::inFromKeyBoard()
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
void Matrix::print()
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
double Matrix::det()
{
	if (size == 2)
	{
		return data[0][0] * data[1][1] - data[0][1] * data[1][0];
	}
	double r = 0;
	double sign = 1;
	for (int i = 0; i < size; ++i)
	{
		r += sign * data[0][i] * alg(0, i).det();
		sign *= -1;
	}
	return r;
}

void Matrix::swap(double& x, double& y)
{
	double temp = x;
	x = y;
	y = temp;
}

// swap rows
void Matrix::swapRows(int const i, int const j)
{
	for (int k = 0; k < size; ++k)
	{
		swap(this->data[i][k], this->data[j][k]);
	}
}

// row down
void Matrix::rowDown(int const i)
{
	for (int k = i + 1; k < size; ++k)
	{
		this->swapRows(k, k - 1);
	}
}

// swap cols
void Matrix::swapCols(int const i, int const j)
{
	for (int k = 0; k < size; ++k)
	{
		swap(this->data[k][i], this->data[k][j]);
	}
}

// col right
void Matrix::colRight(int const i)
{
	for (int k = i + 1; k < size; ++k)
	{
		this->swapCols(k, k - 1);
	}
}

// алгебраическое дополнение
Matrix Matrix::alg(int i, int j)
{
	Matrix result(size - 1);
	Matrix m(size);
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