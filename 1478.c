#include <stdio.h>
int main()
{
	int N, M[100][100];
	int i, j, x;
	int n, k, y;

	while(1)
	{
		scanf("%d", &N);
		if(N == 0) break;
		n = N - 1;
		x = 1;

		for(i = 0; i < N; ++i){
			j = i + 1;
			k = 2;
			for(; j < N; j++){
				M[i][j] = k;
				++k;
			}
		}
		j = n-x;
		for(i = n; i >= 0; --i){
			y = 2;
			j = n-x;
			for(; j >= 0; j--){
				M[i][j] = y;
				++y;
			}
			x++;
		}
		for(i = 0; i < N; ++i){
				M[i][i] = 1;
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
