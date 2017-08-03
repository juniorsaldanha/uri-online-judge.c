#include <stdio.h>
int main(){
	int X, Y, sub;
	int j = 1;

	scanf("%d%d", &X, &Y);
	sub = (Y - X);
	if(Y%sub == 0) j = Y/sub;
	else j = Y/sub+1;
	printf("%d\n", j);

	return 0;
}
