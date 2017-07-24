#include <stdio.h>
#include <stdlib.h>
void le_vetor(int A[], int n){
	int i;

	for (i = 0; i < n; ++i)
	{
		scanf("%d", &A[i]);
	}
}
int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}
int verificar_quant_elementos_distintos(int A[], int n){
	int value = 1;
	int i;
	for (i = 0; i < (n-1); ++i)
	{
		if(i <= (n-1) && A[i] != A[i+1]){
			++value;
		}
	}
	return value;
}
int main(){
	int T, N;

	scanf("%d", &T);
	
	while(T > 0){
		scanf("%d", &N);
		int carneirinhos[N];
		le_vetor(carneirinhos, N);
		qsort(carneirinhos, N, sizeof(int), cmpfunc);
		printf("%d\n", verificar_quant_elementos_distintos(carneirinhos, N));
		--T;
	}
	


	return 0;
}