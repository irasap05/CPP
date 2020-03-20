#include <iostream>

using namespace std;

class matrix
{
public:
	// fields
	double** data;
	int size;

	// constructors
	matrix(int size)
	{
		this->size = size;
		data = new double*[size];
		for (int i = 0; i < size; ++i)
		{
			data[i] = new double[size];
		}
	}

	// others
	// алгебраическое дополнение
	matrix alg(int i, int j)
	{
		return matrix(3);
	}

	// определитель матрицы
	double det()
	{
		return 0;
	}
};

int facToMoreva(int n)
{
	int r = 1;
	for (int i = 2; i <= n; ++i)
	{
		r *= i;
	}
	return r;
}

int facToMorevaRec(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n * facToMorevaRec(n - 1);
}

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


int main()
{
	matrix m(3);
	return 0;
}