#pragma once
#include <iostream>
#include <ctime>

using namespace std;

void task1()
{
	double d = 3;
	double c = sqrt(d - 1);
	double a = 1 / (d * d);
	double B = (a + c) / 3.2;
	cout << B;
}

void task2()
{
	int a;
	cin >> a;
	cout << double(a) / 1000 << " " << a * 1000 << " " << a * 100;
}

void task3()
{
	srand(time(0));
	int n = rand() % 1000;
	cout << n << endl;
	int s = n / 100;
	int e = n % 10;
	if (s == e)
	{
		cout << "da";
	}
	else
	{
		cout << "net";
	}
}

void task4()
{
	int o = 0;
	int p = 0;
	for (int i = 0; i < 7; i++)
	{
		int x = (rand() % 201) - 100;
		cout << x << " ";
		if (x > 0)
		{
			++p;
		}
		if (x < 0)
		{
			++o;
		}
	}
	cout << endl << p << " " << o;
}

void task5()
{
	int k = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x % 10 == 4 && x % 6 == 0)
		{
			++k;
		}
	}
	cout << k;
}

void task6()
{
	int p = 1;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x = (rand() % 21) - 10;
		cout << x << " ";
		if (x > 0 && x % 2 != 0)
		{
			p *= x;
		}
	}
	cout << endl << p;
}

void task7()
{
	int n;
	cin >> n;
	double s = 0;
	for (double i = 1; i <= n; i++)
	{
		s += (i + 1) / i;
	}
	cout << s;
}

void task8()
{
	int n;
	cin >> n;
	double s = 0;
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x % 10 == 2 && x % 6 == 0)
		{
			s += x;
			++k;
		}
	}
	cout << s / k;
}

void task9()
{
	int a;
	int m = INT_MAX;
	for (int i = 0; i < 4; i++)
	{
		cin >> a;
		if (a < m)
		{
			m = a;
		}
	}
	cout << m;
}

void task10()
{
	int a;
	cin >> a;
	int s = 0;
	while (a != 0)
	{
		s += a % 10;
		a /= 10;
	}
	cout << s;
}

void task11()
{
	int a;
	int m = INT_MAX;
	int M = INT_MIN;
	for (int i = 0; i < 3; i++)
	{
		cin >> a;
		if (a > M)
		{
			M = a;
		}
		if (a < m)
		{
			m = a;
		}
	}
	cout << m + M;
}

void task12()
{
	int const n = 10;
	int x[n];
	int y[n];
	int i;
	int m = 0;
	for (int i = 0; i < n; i++)
	{
		y[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
		if (x[i] < 0)
		{
			++m;
			y[m] = x[i];
			cout << y[m] << " ";
		}
	}
}