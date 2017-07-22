#include <stdio.h>
int main()
{
	int N, M[100][100];
	int i, j;
	int x, y, n, z, e, w, h, g;

	while(1)
	{
		scanf("%d", &N);
		if(N == 0) break;
		x = 1;
		z = 0;
		for(i = 0; i < N; ++i){
			for (j = 0; j < N; ++j)
			{
				M[i][j] = x;
				x *= 2;
			}
			y = M[i][1];
			x = y;
		}

		n = M[N-1][N-1];
		while(n >= 1){
			n /= 10;
			z += 1;
		}
		for (i = 0; i < N; ++i)
		{
			for (j = 0; j < N; ++j)
			{
				if (j == 0) printf("%*d", z, M[i][j]);
				else{
					printf(" %*d", z, M[i][j]);
				}
			}		
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
