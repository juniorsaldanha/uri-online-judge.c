#include <stdio.h>
int main()
{
	int nFunc, hTrabalhadas;
	double vHoras, SalarioFinal;

	scanf("%d", &nFunc);
	scanf("%d", &hTrabalhadas);
	scanf("%lf", &vHoras);

	SalarioFinal = (hTrabalhadas*vHoras);

	printf("NUMBER = %d\n", nFunc);
	printf("SALARY = U$ %.2lf\n", SalarioFinal);

	return 0;
}
