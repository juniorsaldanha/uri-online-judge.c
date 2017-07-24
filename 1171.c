#include <stdio.h>
#include <stdlib.h>
int ler_vetor(int A[], int n){
	int i;

	for(i = 0; i < n; ++i){
		scanf("%d", &A[i]);
	}
	return 0;
}
int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}
int verificar_elementos(int A[], int B[], int n){
	int i, aux;

	for(i = 0; i < n; ++i){
		aux = A[i];
		B[aux] += 1;
	}
	for(i = 0; i < 2001; ++i){
		if(B[i] != 0){
			//4 aparece 1 vez(es)
			printf("%d aparece %d vez(es)\n", i, B[i]);
		}
	}

}
int main(){
	int n;
	//qsort (values, 6, sizeof(int), compare);
	scanf("%d", &n);
	int vetor1[n], vetor2[2001] = { 0 };
	ler_vetor(vetor1, n);
	qsort(vetor1, n, sizeof(int), compare);
	verificar_elementos(vetor1, vetor2, n);

	return 0;
}
