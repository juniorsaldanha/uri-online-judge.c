#include <stdio.h>
int main()
{
	char nome;
	double salario, vendas, salariototal;

	scanf("%s", &nome);
	scanf("%lf", &salario);
	scanf("%lf", &vendas);
	salariototal = ((vendas*.15)+salario);
	
	printf("TOTAL = R$ %.2lf\n", salariototal);

	return 0;
}
