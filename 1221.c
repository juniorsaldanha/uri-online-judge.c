#include <stdio.h>
int primo(int unsigned a){
	int b;

	for (b = 2; b < a; ++b)
	{
		if(a % b == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int unsigned X;
	int N, m;
	scanf("%d", &N);

	while(N > 0){
		scanf("%d", &X);
		if(X == 2147483647){
			printf("Prime\n");
			--N;
		}
		else{
			m = primo(X);
			if(m == 0) printf("Not Prime\n");
			else printf("Prime\n");
			--N;
		}
	}
	return 0;
}
