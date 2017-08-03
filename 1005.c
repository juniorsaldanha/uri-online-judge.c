#include <stdio.h>
int main()
{
	double A, B, media, pesoA, pesoB;
	pesoA = 3.5;
	pesoB = 7.5;

	scanf("%lf", &A);
	scanf("%lf", &B);
	media = (((A*pesoA)+(B*pesoB))/11);

	printf("MEDIA = %.5lf\n", media);

	return 0;
}
