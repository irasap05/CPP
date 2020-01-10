#include "LinearSystem.h"
#include "Row.h"
#include <iostream>

using namespace std;

// Конструктор
LinearSystem::LinearSystem(Row r1, Row r2, Row r3)
{
	data[0] = r1;
	data[1] = r2;
	data[2] = r3;
}

// Пустой конструктор
LinearSystem::LinearSystem()
{

}

void LinearSystem::print()
{
	for (int i = 0; i < 3; ++i)
	{
		data[i].print();
	}
	cout << endl;
}

void LinearSystem::swapRows(int n1, int n2)
{
	Row temp = data[n1];
	data[n1] = data[n2];
	data[n2] = temp;
}

bool LinearSystem::StraightGauss()
{
	for (int i = 0; i < 3 - 1; i++)
	{
		if (!StraightGaussStep(i))
		{
			return false;
		}
	}
}

bool LinearSystem::StraightGaussStep(int const k)
{
	if (data[k].data[k] == 0)
	{
		bool flag = true;
		for (int i = k + 1; i < 3; ++i)
		{
			if (data[i].data[k] != 0)
			{
				swapRows(k, i);
				flag = false;
				break;
			}
		}
		if (flag)
		{
			return false;
		}
	}
	for (int i = k + 1; i < 3; ++i)
	{
		data[i] = data[i] - (data[i].data[k] / data[k].data[k]) * data[k];
	}
}

// обратный ход метода Гаусса
bool LinearSystem::ReverseGauss()
{
	for (int i = 3 - 1; i > 0; --i)
	{
		if (!ReverseGaussStep(i))
		{
			return false;
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		data[i].data[3] /= data[i].data[i];
		data[i].data[i] = 1;
	}
}

// шаг прямого хода метода Гаусса
bool LinearSystem::ReverseGaussStep(int const k)
{
	for (int i = k - 1; i >= 0; --i)
	{
		if (data[k].data[k] == 0)
		{
			return false;
		}
		data[i] = data[i] - (data[i].data[k] / data[k].data[k]) * data[k];
	}
}