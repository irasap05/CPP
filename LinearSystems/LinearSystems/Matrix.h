#pragma once

#include <iostream>

using namespace std;

struct Vector
{
	double* data;
	int size;

	Vector(int size)
	{
		data = new double[size];
		this->size = size;
	}

	~Vector()
	{
		delete[] data;
	}

	void print()
	{
		for (int i = 0; i < size; ++i)
		{
			cout << data[i] << " ";
		}

		cout << endl;
	}

	void inputFromKeyboard()
	{
		for (int i = 0; i < size; ++i)
		{
			cin >> data[i];
		}
	}
};

struct Matrix
{
	double** data;
	int size;

	Matrix(int size)
	{
		this->data = new double* [size];

		for (int row = 0; row < size; ++row)
		{
			this->data[row] = new double[size];
		}

		this->size = size;
	}

	~Matrix()
	{
		for (int i = 0; i < size; ++i)
		{
			delete[] data[i];
		}

		delete[] data;
	}

	void print()
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

	void inputFromKeyboard()
	{
		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				cin >> data[i][j];
			}
		}
	}

	void swapRows(int row1, int row2)
	{
		for (int column = 0; column < size; ++column)
		{
			double temp = data[row1][column];
			data[row1][column] = data[row2][column];
			data[row2][column] = temp;
		}
	}

	void swapColumns(int column1, int column2)
	{
		for (int row = 0; row < size; ++row)
		{
			double temp = data[row][column1];
			data[row][column1] = data[row][column2];
			data[row][column2] = temp;
		}
	}

	Matrix alg(int const row, int const column) const
	{
		Matrix temp(size);
		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				temp.data[i][j] = this->data[i][j];
			}
		}

		for (int i = row + 1; i < size; ++i)
		{
			temp.swapRows(i - 1, i);
		}

		for (int i = column + 1; i < size; ++i)
		{
			temp.swapColumns(i - 1, i);
		}

		Matrix m(size - 1);

		for (int i = 0; i < size - 1; ++i)
		{
			for (int j = 0; j < size - 1; ++j)
			{
				m.data[i][j] = temp.data[i][j];
			}
		}

		return m;
	}

	Matrix swapColumnToVector(int const column, Vector const vector) const
	{
		Matrix temp(size);
		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				temp.data[i][j] = this->data[i][j];
			}
		}

		for (int i = 0; i < size; ++i)
		{
			temp.data[i][column] = vector.data[i];
		}

		return temp;
	}

	double det()
	{
		if (size == 1)
		{
			return data[0][0];
		}

		if (size == 2)
		{
			return data[0][0] * data[1][1] - data[0][1] * data[1][0];
		}

		double sign = 1;
		double sum = 0;

		for (int column = 0; column < size; ++column)
		{
			sum += data[0][column] * alg(0, column).det();
			sign *= -1;
		}

		return sum;
	}
};
