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

int main()
{

	return 0;
}