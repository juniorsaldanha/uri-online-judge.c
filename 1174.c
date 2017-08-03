#include <stdio.h>
int main()
{
	double A[100];
	int i;
	for (i = 0;  i < 100;  i += 1)
	{
		scanf ("%lf", &A[i]);
	}
	for (i = 0;  i < 100;  i += 1)
	{
		if (A[i] <= 10)
		{
			printf ("A[%i] = %.1lf\n", i, A[i]);	
		}
	}
	return 0;
}
