#include <stdio.h>
int main(){
	int valor[3];
	int i, aux = 0;

	for(i = 0; i < 3; ++i){
		scanf("%d", &valor[i]);
	}
	for (i = 0; i < 3; ++i)
	{
		if(aux < valor[i]) aux = valor[i];
	}
	printf("%d eh o maior\n", aux);
	return 0;
}
