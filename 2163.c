#include <stdio.h>
int main()
{
	int i, j, x = 0, y = 0;
	int n, m;
	scanf("%d%d", &n, &m);
	int matriz[n][m];

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			scanf("%d", &matriz[i][j]);
		}
	}

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			if(matriz[i][j] == 42 && matriz[i-1][j-1]==7 && matriz[i-1][j] == 7 && matriz[i-1][j+1] == 7 && matriz[i][j-1] == 7 && matriz[i][j+1] == 7 && matriz[i+1][j-1] == 7 && matriz[i+1][j] == 7 && matriz[i+1][j+1] == 7){
				x = i +1;
				y = j +1;
			}
		}
	}
	printf("%d %d\n", x, y);

	return 0;
}
