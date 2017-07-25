#include <stdio.h>
int ler_vetor(int A[], int n){
	int i;

	for(i = 0; i < n; ++i){
		scanf("%d", &A[i]);
	}
	return 0;
}
void advinha(int A[], int n, int S){
	int i, aux1 = 9999999, aux2 = 9999999, id = 9999999;

	for(i = 0; i < n; ++i){
		if(A[i] <= S){
			aux1 = S - A[i];
		}
		else if(A[i] > S){
			aux1 = A[i] - S;
		}
		if(i == 0){
			aux2 = aux1;
			id = i+1;
		}
		else if(i != 0 && aux1 < aux2){
			aux2 = aux1;
			id = i+1;
		}
	}
	printf("%d\n", id);
	return;
}
int main(){
	int N, QT, S;

	scanf("%d", &N);
	while(N > 0){
		scanf("%d%d", &QT, &S);
		int vetor[QT];
		ler_vetor(vetor, QT);
		advinha(vetor, QT, S);
		--N;
	}
	



	return 0;
}
