#include "LinearSystem.h"
#include "Row.h"
#include <iostream>

using namespace std;

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

bool LinearSystem::straightGauss()
{
	if (data[0].data[0] == 0)
	{
		bool flag = true;
		for (int i = 1; i < 3; ++i)
		{
			if (data[i].data[0] != 0)
			{
				swapRows(0, i);
				flag = false;
				break;
			}
		}
		if (flag)
		{
			return false;
		}
	}
	for (int i = 1; i < 3; ++i)
	{
		data[i] = data[i] - (data[i].data[0] / data[0].data[0]) * data[0];
	}
}