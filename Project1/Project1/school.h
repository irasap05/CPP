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