#pragma once
#include "Row.h"

struct LinearSystem
{
	// ����� �������� ������
	Row data[3];

	// �����������
	LinearSystem(Row r1, Row r2, Row r3);

	// ������ �����������
	LinearSystem();

	// �������� ������� �� �����
	void print();

	// ������ ������ �������
	void swapRows(int n1, int n2);

	// ������ ��� ������ ������
	bool StraightGauss();

	// ��� ������� ���� ������ ������
	bool StraightGaussStep(int const k);

	// �������� ��� ������ ������
	bool ReverseGauss();

	// ��� ������� ���� ������ ������
	bool ReverseGaussStep(int const k);
};