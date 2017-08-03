#include <stdio.h>
int main(){
	int a, b, c;
	double litros;
	scanf("%d %d", &a, &b);
	c = a*b;
	litros = (double) c/12.0;
	printf("%.3lf\n", litros);
  return 0;
}
