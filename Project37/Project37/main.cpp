#include <iostream>
#include "matrix.h"

using namespace std;

int main()
{
	matrix m(4);
	m.inFromKeyBoard();
	cout << endl;
	m.alg(0, 0).print();
	cout << endl;
	m.alg(1, 2).print();
	return 0;
}