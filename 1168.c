#include <stdio.h>
int main()
{
	int n, i, j;
	int leds, tamanho = 0;
	char numero[105];

	scanf("%d", &n);
	for (i = 0; i < n; ++i)
	{
		leds = 0;
		scanf("%s", &numero);
		tamanho = strlen (numero);
		for (j = 0; j < tamanho; ++j)
		{
			if(numero[j] == '1') leds += 2;
			if(numero[j] == '2') leds += 5;
			if(numero[j] == '3') leds += 5;
			if(numero[j] == '4') leds += 4;
			if(numero[j] == '5') leds += 5;
			if(numero[j] == '6') leds += 6;
			if(numero[j] == '7') leds += 3;
			if(numero[j] == '8') leds += 7;
			if(numero[j] == '9') leds += 6;
			if(numero[j] == '0') leds += 6;
		}
	printf("%d leds\n", leds);
	}
	return 0;
}
