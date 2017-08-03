#include <stdio.h>
int main()
{
	double A, B, C, media, pesoA, pesoB, pesoC;;
	pesoA = 2.0;
	pesoB = 3.0;
	pesoC = 5.0;

	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	media = (((A*pesoA)+(B*pesoB)+(C*pesoC))/10);

	printf("MEDIA = %.1lf\n", media);

	return 0;
}
