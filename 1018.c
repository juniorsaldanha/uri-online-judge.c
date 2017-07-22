#include <stdio.h>
int main()
{
	int n, n_old, nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0, nota1 = 0;

	scanf("%d", &n);
	n_old = n;

	if (n > 0)
	{
		if(n >= 100){
			nota100 = n / 100;
			n = n % 100;
		}
		if(n >= 50){
			nota50 = n / 50;
			n = n % 50;
		}
		if(n >= 20){
			nota20 = n / 20;
			n = n % 20;
		}
		if(n >= 10){
			nota10 = n / 10;
			n = n % 10;
		}
		if(n >= 5){
			nota5 = n / 5;
			n = n % 5;
		}
		if(n >= 2){
			nota2 = n / 2;
			n = n % 2;
		}
		if(n >= 1){
			nota1 = n / 1;
			n = n % 1;
		}
		
		printf("%d\n", n_old);
		printf("%d nota(s) de R$ 100,00\n", nota100);
		printf("%d nota(s) de R$ 50,00\n", nota50);
		printf("%d nota(s) de R$ 20,00\n", nota20);
		printf("%d nota(s) de R$ 10,00\n", nota10);
		printf("%d nota(s) de R$ 5,00\n", nota5);
		printf("%d nota(s) de R$ 2,00\n", nota2);
		printf("%d nota(s) de R$ 1,00\n", nota1);
	}


	
	return 0;
}
