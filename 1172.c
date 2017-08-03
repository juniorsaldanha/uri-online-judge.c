#include <stdio.h>
#define N 10
int main()
{
		int X[N], i;
	
		for(i = 0; i < N; ++i)
		{
			scanf("%i", &X[i]);
		}
		i = 0;
		while(i < N)
		{
			if(X[i] <= 0)
            {
			    X[i] = 1;
		    }
			printf("X[%d] = %d\n", i, X[i]);
			++i;
		}
	return 0;
}
