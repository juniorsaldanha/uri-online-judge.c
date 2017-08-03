#include <stdio.h>
int main(){
	int a[2], b[2];
	double valor[2];
	double total;

	scanf("%d %d %lf", &a[1], &b[1], &valor[1]);
	scanf("%d %d %lf", &a[2], &b[2], &valor[2]);

	total = ((valor[1]*b[1])+(valor[2]*b[2]));

	printf("VALOR A PAGAR: R$ %.2lf\n", total);

	return 0;
}
