#include <stdio.h>
int main()
{
	long long unsigned int fib[61];
	fib[0] = 0;
	fib[1] = 1;
	int t, i, n;
	
	scanf ("%d", &t);
	for (i = 2; i < 61; i += 1)
	{
		fib[i] = fib[(i-2)] + fib[(i-1)];
	}
	for (i = t; i != 0; i -= 1)
	{
		scanf ("%d", &n);
		printf ("Fib(%d) = %lld\n", n, fib[n]);
	}
	return 0;
}
