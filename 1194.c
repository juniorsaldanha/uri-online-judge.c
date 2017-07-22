#include <stdio.h>
int main()
{
	int N, C, R, S, Total, contador;
	char Tipo;

	scanf("%d", &N);
	C = R = S = Total = 0;

	while (N--)
	{
		scanf("%d %c", &contador, &Tipo);
		if (Tipo == 'C')
		{
			C += contador;
		}
		else if (Tipo == 'R')
		{
			R += contador;
		}
		else if (Tipo == 'S')
		{
			S += contador;
		}


	}
		Total = C + R + S;

	printf("Total: %d cobaias\n", Total);
	printf("Total de coelhos: %d\n", C);
	printf("Total de ratos: %d\n", R);
	printf("Total de sapos: %d\n", S);
	printf("Percentual de coelhos: %.2lf %%\n",(float) (C*100.00/Total));
	printf("Percentual de ratos: %.2lf %%\n",(float) (R*100.00/Total));
	printf("Percentual de sapos: %.2lf %%\n",(float) (S*100.00/Total));

return 0;
}
