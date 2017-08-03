#include <stdio.h>
int main(){
	int N, i, j, menor, pos;
	scanf("%d", &N);
	int X[N];

	for (i = 0; i < N; ++i){
		scanf("%d",&X[i]);
	}
	menor = X[0];
	pos = i;
	for (i = 0; i < N; ++i){
		if(menor > X[i]){
			menor = X[i];
			pos = i;
		}
	}
	printf("Menor valor: %d\nPosicao: %d\n", menor, pos);

	return 0;
}
