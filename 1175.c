#include <stdio.h>
int main()
{
	int N[20], i;
	
	for (i = 19	; i >= 0; i -= 1)
	{
		scanf ("%d", &N[i]);
	}
	for (i = 0; i < 20; i += 1)
	{
		
		printf ("N[%d] = %d\n", i, N[i]);
	}
	
	return 0;
}
