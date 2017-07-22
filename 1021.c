#include <stdio.h>
int main()
{
	int ncedulas = 0, nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0;
	int nmoedas = 0, moeda100 = 0, moeda50 = 0, moeda25 = 0, moeda10 = 0, moeda5 = 0, moeda1 = 0;
	double n;

	scanf("%lf", &n);
	ncedulas = (int) n;
	nmoedas = (int) ((n * 100)-(ncedulas * 100));

	if(n > 0)
	{
		nota100 = ncedulas / 100;
		ncedulas = ncedulas % 100;
		nota50 = ncedulas / 50;
		ncedulas = ncedulas % 50;
		nota20 = ncedulas / 20;
		ncedulas = ncedulas % 20;
		nota10 = ncedulas / 10;
		ncedulas = ncedulas % 10;
		nota5 = ncedulas / 5;
		ncedulas = ncedulas % 5;
		nota2 = ncedulas / 2;
		ncedulas = ncedulas % 2;
		moeda100 = ncedulas / 1;

		moeda50 = nmoedas / 50;
		nmoedas = nmoedas % 50;
		moeda25 = nmoedas / 25;
		nmoedas = nmoedas % 25;
		moeda10	= nmoedas / 10;
		nmoedas = nmoedas % 10;
		moeda5 = nmoedas / 5;
		nmoedas = nmoedas % 5;
		moeda1 = nmoedas;


		printf("NOTAS:\n");
		printf("%d nota(s) de R$ 100.00\n", nota100);
		printf("%d nota(s) de R$ 50.00\n", nota50);
		printf("%d nota(s) de R$ 20.00\n", nota20);
		printf("%d nota(s) de R$ 10.00\n", nota10);
		printf("%d nota(s) de R$ 5.00\n", nota5);
		printf("%d nota(s) de R$ 2.00\n", nota2);
		printf("MOEDAS:\n");
		printf("%d moeda(s) de R$ 1.00\n", moeda100);
		printf("%d moeda(s) de R$ 0.50\n", moeda50);
		printf("%d moeda(s) de R$ 0.25\n", moeda25);
		printf("%d moeda(s) de R$ 0.10\n", moeda10);
		printf("%d moeda(s) de R$ 0.05\n", moeda5);
		printf("%d moeda(s) de R$ 0.01\n", moeda1);
	}


return 0;
}
