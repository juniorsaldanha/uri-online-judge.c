#include <stdio.h>
#include <string.h>
int main(){
	char S[101];
	int tam, i, soma = 0, Nnotas = 0;
	double media;

	scanf("%s", &S);
	tam = strlen(S);

	for(i = 0; i < tam; ++i){
		if(S[i] == '1' && S[i+1] == '0'){
			soma += 10;
			++i;
		}
		else{
			soma += S[i]-48;
		}
		++Nnotas;
	}
	media = (double)soma/Nnotas;
	printf("%.2f\n", media);

	return 0;
}
