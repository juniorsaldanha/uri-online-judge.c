#include <stdio.h>
int main()
{
	int N, M[100][100];
	int i, j;
	int a, b, c, d, e, v, n;

	while(1)
	{
		scanf("%d", &N);
		if(N == 0) break;

		if(N % 2 == 0) v = (N / 2);
		else if(N % 2 == 1) v = (N / 2 + 1);

		a = 1, d = 0, n = N;

		for(e = 1; e <= v; ++e)
		{
			for (b = d; b < n; ++b)
			{
				for(c = d; c < n; ++c)
				{
					M[b][c] = a;
				}
			}
			++d, ++j, --n, ++a;
		}
		
		for (i = 0; i < N; ++i)
		{
			for (j = 0; j < N; ++j)
			{
				if (j == 0) printf("%3d", M[i][j]);
				else{
					printf(" %3d", M[i][j]);
				}
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
