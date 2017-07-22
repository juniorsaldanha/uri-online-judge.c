#include <stdio.h>
int main()
{
	/*int num1;*/
	int num1, num2, num3, num4, num5;
	int numpositivo, numnegativo, numimpar, numpar;
	
	numpositivo = 0;
	numnegativo = 0;
	numimpar = 0;
	numpar = 0;

	scanf("%d/n", &num1);

	if ((num1 % 2) == 0)
	{
		numpar++;
		if (num1 > 0)
		{
			numpositivo++;
		}
		if(num1 < 0)
		{
			numnegativo++;
		}
	}
	
	if ((num1 % 2) != 0)
	{
		numimpar++;
		if (num1 > 0)
		{
			numpositivo++;
		}
		if(num1 < 0)
		{
			numnegativo++;
		}
	}

		scanf("%d/n", &num2);

	if ((num2 % 2) == 0)
	{
		numpar++;
		if (num2 > 0)
		{
			numpositivo++;
		}
		if(num2 < 0)
		{
			numnegativo++;
		}
	}
	
	if ((num2 % 2) != 0)
	{
		numimpar++;
		if (num2 > 0)
		{
			numpositivo++;
		}
		if(num2 < 0)
		{
			numnegativo++;
		}
	}

		scanf("%d/n", &num3);

	if ((num3 % 2) == 0)
	{
		numpar++;
		if (num3 > 0)
		{
			numpositivo++;
		}
		if(num3 < 0)
		{
			numnegativo++;
		}
	}
	
	if ((num3 % 2) != 0)
	{
		numimpar++;
		if (num3 > 0)
		{
			numpositivo++;
		}
		if(num3 < 0)
		{
			numnegativo++;
		}
	}

		scanf("%d/n", &num4);

	if ((num4 % 2) == 0)
	{
		numpar++;
		if (num4 > 0)
		{
			numpositivo++;
		}
		if(num4 < 0)
		{
			numnegativo++;
		}
	}
	
	if ((num4 % 2) != 0)
	{
		numimpar++;
		if (num4 > 0)
		{
			numpositivo++;
		}
		if(num4 < 0)
		{
			numnegativo++;
		}
	}

		scanf("%d/n", &num5);

	if ((num5 % 2) == 0)
	{
		numpar++;
		if (num5 > 0)
		{
			numpositivo++;
		}
		if(num5 < 0)
		{
			numnegativo++;
		}
	}
	
	if ((num5 % 2) != 0)
	{
		numimpar++;
		if (num5 > 0)
		{
			numpositivo++;
		}
		if(num5 < 0)
		{
			numnegativo++;
		}
	}

	printf("%d valor(es) par(es)\n", numpar);
	printf("%d valor(es) impar(es)\n", numimpar);
	printf("%d valor(es) positivo(s)\n", numpositivo);
	printf("%d valor(es) negativo(s)\n", numnegativo);


	return (0);
}
