#pragma once

struct Row
{
	// здесь хранятся сами данные
	double data[4];

	// выводит строку на консоль
	void print();

	// складывает строки
	friend Row operator+(Row r1, Row r2);

	// умножает число на строку
	friend Row operator*(double alpha, Row r);

	// умножает строку на число
	friend Row operator*(Row r, double alpha);

	// вычитает строки
	friend Row operator-(Row r1, Row r2);
};