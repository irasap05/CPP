#pragma once
#include "Row.h"

struct LinearSystem
{
	// здесь хранятся данные
	Row data[3];

	// Конструктор
	LinearSystem(Row r1, Row r2, Row r3);

	// Пустой конструктор
	LinearSystem();

	// печатает систему на экран
	void print();

	// меняет строки местами
	void swapRows(int n1, int n2);

	// прямой ход метода Гаусса
	bool StraightGauss();

	// шаг прямого хода метода Гаусса
	bool StraightGaussStep(int const k);

	// обратный ход метода Гаусса
	bool ReverseGauss();

	// шаг прямого хода метода Гаусса
	bool ReverseGaussStep(int const k);
};