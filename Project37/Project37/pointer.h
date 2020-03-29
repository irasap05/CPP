#pragma once

#include <iostream>

using namespace std;

// изменение глобальной переменной через указатель
void f1(int* n)
{
	++(*n);
}

// изменение глобальной переменной через ссылку
void f2(int& n)
{
	++n;
}

void pointerBegin()
{
	int x[3];
	cout << x << endl;
	int* p = new int[3];
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	for (int i = 0; i < 3; ++i)
	{
		cout << *(p + i) << " ";
	}
}

void dynamicArray()
{
	int n;
	cin >> n;
	int** a = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[n];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			a[i][j] = 10 * (i + 1) + j;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] a[i];
	}
	delete[] a;
}
