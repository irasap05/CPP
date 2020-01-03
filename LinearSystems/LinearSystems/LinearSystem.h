#pragma once
#include "Row.h"

struct LinearSystem
{
	// ����� �������� ������
	Row data[3];

	// �������� ������� �� �����
	void print();

	// ������ ������ �������
	void swapRows(int n1, int n2);

	// ������ ��� ������ ������
	bool straightGauss();
};