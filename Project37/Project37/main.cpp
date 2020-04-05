#include <iostream>
#include "matrix.h"
#include "linearSystem.h"

using namespace std;

int main()
{
	LinearSystem l(4);
	l.inFromKeyBoard();
	l.kramer();
	l.answer.print();
	return 0;
}