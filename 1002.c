#include <stdio.h>
int main()
{
	double area, raio, pi = 3.14159;
	scanf("%lf", &raio);

	raio = pi * (raio*raio);
	printf("A=%.4lf\n", raio);
return 0;
}
