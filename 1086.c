#include <stdio.h>
int main(int argc, char const *argv[])
{
	double M[12][12],valor = 0.0;
	int linha, coluna, n = 11;
	char operacao;

	scanf("%s", &operacao);
	for (linha = 0; linha < 12; ++linha)
	{
		for (coluna = 0; coluna < 12; ++coluna)
		{
			scanf("%lf", &M[linha][coluna]);
		}
	}

	for (linha = 1; linha <= 11; ++linha)
	{
		for (coluna = 11; coluna >= n; --coluna)
		{
			valor += M[linha][coluna];
		}
		--n;
	}

	if (operacao == 'M')
	{
		valor /= 66.0;
	}

	printf("%.1lf\n", valor);

	return 0;
}
