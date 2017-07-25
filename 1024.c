#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char descriptografar(char texto[1000]){
	int i, j, tam;
	tam = strlen(texto);
	for(i = 0; i < tam; ++i){
		if((texto[i] >= 'a') && (texto[i] <= 'z') || (texto[i] >= 'A') && (texto[i] <= 'Z')){
			texto[i] = texto[i] + 3;
		}
	}
	j = tam - 1;
	int aux1, aux2;
	for(i = 0; i < (tam/2); ++i && --j){
		aux1 = texto[i];
		aux2 = texto[j];
		texto[i] = aux2;
		texto[j] = aux1;
	}
	for(i = tam/2; i < tam; ++i){
		texto[i] -= 1;
	}
	printf("%s\n", texto);
	return 0;
}
int main(){
	int N;
	char pass[1000];
	scanf("%d", &N);
	while(N > 0){
		scanf(" %[^\n]", pass);
		descriptografar(pass);
		--N;
	}
	return 0;
}
