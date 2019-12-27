#include <iostream>

using namespace std;

struct vector
{
	double x;
	double y;
	double z;
	// выводит вектор на экран
	void print()
	{
		cout << "(" << x << "; " << y << "; " << z << ")";
	}
};

vector operator+(vector v1, vector v2)
{
	vector sum;
	sum.x = v1.x + v2.x;
	sum.y = v1.y + v2.y;
	return sum;
}

int main()
{
	vector v;
	v.x = 1;
	v.y = 2;
	v.z = 3;
	vector u = v + v;
	u.print();
	
	return 0;
}