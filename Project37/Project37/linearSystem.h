#pragma once
#include "matrix.h"

class AnswerForLS
{
public:
	// fields
	double* data;
	int size;
	
	// out
	// output to console
	void print();
};

class LinearSystem
{
public:
	// fields
	double** data;
	int size;
	AnswerForLS answer;

	// constructor
	LinearSystem(int const size);

	// input
	void inFromKeyBoard();

	// out
	// output to console
	void print();

	// others
	Matrix coefficientMatrix();

	Matrix swapColumnMatrix(int const j);

	void kramer();
};