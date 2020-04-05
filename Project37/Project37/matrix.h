#pragma once

class Matrix
{
public:
	// fields
	double** data;
	int size;

	// constructors
	Matrix(int const size);
	Matrix& operator=(Matrix const& m);

	// input
	void inFromKeyBoard();

	// output to console
	void print();

	// others
	// swap rows
	void swapRows(int const i, int const j);

	// row down
	void rowDown(int const i);

	// swap cols
	void swapCols(int const i, int const j);


	// col right
	void colRight(int const i);

	// алгебраическое дополнение
	Matrix alg(int i, int j);

	// определитель матрицы
	double det();
private:
	void swap(double& x, double& y);
};