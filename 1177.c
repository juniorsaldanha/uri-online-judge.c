#include <stdio.h>
int main()
{
	int T, N[1000], i, n;
	scanf("%d", &T);
	for (i = 0, n = 0; i < 1000; ++i, ++n){
		if(n < T){
			N[i] = n;
		}
		else{
			n = 0;
			N[i] = n;
		}
	}
	for (i = 0; i < 1000; ++i)
	{
		printf("N[%d] = %d\n", i, N[i]);
	}
	return 0;
}
