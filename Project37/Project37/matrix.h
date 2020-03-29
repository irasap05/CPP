#pragma once

class matrix
{
public:
	// fields
	double** data;
	int size;

	// constructors
	matrix(int const size);
	matrix& operator=(matrix const& m);

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
	matrix alg(int i, int j);

	// определитель матрицы
	double det();
private:
	void swap(double& x, double& y);
};