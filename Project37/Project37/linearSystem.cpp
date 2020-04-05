#include "matrix.h"
#include "linearSystem.h"
#include <iostream>

using namespace std;

// out
// output to console
void AnswerForLS::print()
{
	cout << "{";
	for (int i = 0; i < size - 1; ++i)
	{
		cout << data[i] << "; ";
	}
	cout << data[size - 1] << "}";
}

// constructor
LinearSystem::LinearSystem(int const size)
{
	data = new double* [size];
	for (int i = 0; i < size; ++i)
	{
		data[i] = new double[size + 1];
	}
	this->size = size;
	answer.data = new double[size];
	answer.size = size;
}

// input
void LinearSystem::inFromKeyBoard()
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size + 1; ++j)
		{
			cin >> data[i][j];
		}
	}
}

// out
// output to console
void LinearSystem::print()
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size + 1; ++j)
		{
			cout << data[i][j] << " ";
		}
		cout << endl;
	}
}

// others
Matrix LinearSystem::coefficientMatrix()
{
	Matrix m(size);
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			m.data[i][j] = data[i][j];
		}
	}
	return m;
}

Matrix LinearSystem::swapColumnMatrix(int const j)
{
	Matrix m(size);
	m = coefficientMatrix();
	for (int i = 0; i < size; ++i)
	{
		m.data[i][j] = data[i][size];
	}
	return m;
}

void LinearSystem::kramer()
{
	double d = coefficientMatrix().det();
	for (int i = 0; i < size; ++i)
	{
		answer.data[i] = swapColumnMatrix(i).det() / d;
	}
}