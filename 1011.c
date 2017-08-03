#include <stdio.h>
int main(){
	double pi = 3.14159, R, raio;

	scanf("%lf", &R);

	raio = ((4/3.0) * pi * (R*R*R));
	printf("VOLUME = %.3lf\n", raio);
	return 0;
}
