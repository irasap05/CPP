#pragma once

struct Row
{
	// ����� �������� ���� ������
	double data[4];

	// �����������
	Row(double x1 = 0, double x2 = 0, double x3 = 0, double b = 0);

	// ������� ������ �� �������
	void print();

	// ���������� ������
	friend Row operator+(Row r1, Row r2);

	// �������� ����� �� ������
	friend Row operator*(double alpha, Row r);

	// �������� ������ �� �����
	friend Row operator*(Row r, double alpha);

	// �������� ������
	friend Row operator-(Row r1, Row r2);
};