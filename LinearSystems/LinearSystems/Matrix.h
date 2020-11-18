#pragma once

#include <iostream>

using namespace std;

struct Vector
{
	double* data;
	int size;

	Vector(int const size)
	{
		this->size = size;
		this->data = new double[size];
	}

	/*~Vector()
	{
		delete[] this->data;
	}*/

	void fromKeyboard()
	{
		for (int i = 0; i < size; ++i)
		{
			cin >> this->data[i];
		}
	}

	void print()
	{
		for (int i = 0; i < size; ++i)
		{
			cout << this->data[i] << " ";
		}
		cout << endl;
	}

	double operator[](int const index) const
	{
		return data[index];
	}
};

struct Matrix
{
	double** data;
	int size;

	Matrix(int const size)
	{
		this->size = size;
		this->data = new double*[size];
		for (int i = 0; i < size; ++i)
		{
			this->data[i] = new double[size];
		}
	}

	/*~Matrix()
	{
		for (int i = 0; i < this->size; ++i)
		{
			delete[] this->data[i];
		}

		delete[] this->data;
	}*/

	double& operator()(int const row, int const column)
	{
		return this->data[row][column];
	}

	Matrix swapColumn(int const column, Vector const vector)
	{
		Matrix m(size);
		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				m(i, j) = this->data[i][j];
			}
		}

		for (int i = 0; i < size; ++i)
		{
			m(i, column) = vector[i];
		}

		return m;
	}

	void swapRows(int const row1, int const row2)
	{

	}

	void swapColumns(int const column1, int const column2)
	{

	}

	Matrix alg(int const row, int const column)
	{
		Matrix m(size - 1);
		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				m(i, j) = this->data[i][j];
			}
		}


	}

	void fromKeyboard()
	{
		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				cin >> this->data[i][j];
			}
		}
	}

	void print()
	{
		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				cout << this->data[i][j] << " ";
			}
			cout << endl;
		}
	}
};