#include <stdio.h>
#include <string.h>
int main()
{
	int n, i, j, k, saltos, tamanho, aux;
	char senhacod[51];

	scanf("%d", &n);

	for (i = 0 ; i < n; ++i)
	{
		k = 0;
		scanf(" %[^\n]", &senhacod);
		scanf("%d", &saltos);
		tamanho = strlen(senhacod);
		for (j = 0; j < tamanho; ++j , ++k)
		{
			if (senhacod[k] - saltos < 65)
			{
				aux = senhacod[k] - 65;
				aux = saltos - aux;
				senhacod[k] = 91 - aux;
			}
			else{
			senhacod[k] = senhacod[k] - saltos;
			}
			printf("%c", senhacod[k]);
		}
		printf("\n");

	}
	return 0;
}
