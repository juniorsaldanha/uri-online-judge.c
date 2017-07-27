#include <stdio.h>
int ler_vetor(int A[], int n){
	int i;

	for(i = 0; i < n; ++i){
		scanf("%d", &A[i]);
	}
	return 0;
}
int main(){
	int N, R, sub, i;

	while( scanf(" %d %d", &N, &R) != EOF) {
		int voltaram[R];
		int naovoltaram[N];
		if(N >= R) sub = N - R;
		else if(R > N) sub = R - R;
		ler_vetor(voltaram, R);
		if(sub == 0){
			printf("*\n");
		}
		else{
			for(i = 0; i < N; ++i){
				naovoltaram[i] = i+1;
			}
			for(i = 0; i < R; ++i)
			{
				naovoltaram[voltaram[i]-1] = 0;
			}
			for (i = 0; i < N; ++i)
			{
				if(naovoltaram[i] != 0){
					printf("%d ", naovoltaram[i]);
				}
				if(i == N-1){
					printf("\n");
				}
			}
		}
	}

	return 0;
}
