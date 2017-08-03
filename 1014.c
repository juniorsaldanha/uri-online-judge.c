#include <stdio.h>
int main(){
	double X, Y, kml;
	scanf("%lf%lf", &X, &Y);
	kml = X/Y;
	printf("%.3lf km/l\n", kml);
	return 0;
}
