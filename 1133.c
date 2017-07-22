#include <stdio.h>
int main()
{
	int X, Y, i, resto;

	scanf("%d%d", &X, &Y);
	if(X > Y)
	{
		for (i = Y + 1; i < X; i++)
		{
			resto = i % 5;
			if(resto == 2 || resto == 3)
				{
					printf("%d\n", i);
				}
		}
	}
	if(Y > X)
	{
		for (i = X + 1; i < Y; i++)
		{
			resto = i % 5;
			if(resto == 2 || resto == 3)
				{
					printf("%d\n", i);
				}
		}
	}

	return 0;
}
