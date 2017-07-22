#include <stdio.h>
int main()
{
	int N[10], i;
	scanf ("%d", &N[0]);
	for (i = 1; i < 10; i += 1)
	{
		N[i] = N[i-1]*2;
	}
	for (i = 0; i < 10; i += 1)
	{
		printf ("N[%d] = %d\n", i, N[i]);
	}
	return 0;
}
