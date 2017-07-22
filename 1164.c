#include <stdio.h>
int main()
{
	unsigned int N, X, i, n;
	scanf("%d", &N);

	while (N != 0)
		{
			i = 1;
			n = 0;
			scanf("%d", &X);

			while(i <= (X / 2))
			{
				if(X % i == 0)
				{
					n += i;
				}
				++i;
			}
			if (n == X)
				{
					printf("%d eh perfeito\n", X);
				}
			else
				{
					printf("%d nao eh perfeito\n", X);
				}
			--N;
		}
	

return 0;
}
