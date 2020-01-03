#pragma once

struct Row
{
	// ����� �������� ���� ������
	double data[4];

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