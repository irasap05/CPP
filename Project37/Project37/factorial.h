#pragma once

int facToMoreva(int n)
{
	int r = 1;
	for (int i = 2; i <= n; ++i)
	{
		r *= i;
	}
	return r;
}

int facToMorevaRec(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n * facToMorevaRec(n - 1);
}