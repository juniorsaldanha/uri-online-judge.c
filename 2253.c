#include <stdio.h>
#include <string.h>
#define maisculas req[1]
#define minusculas req[2]
#define numeros req[3]
#define proibidos req[4]
int main()
{
	char senha [200];
	int i, tamanho;

	while(scanf(" %[^\n]", senha) != EOF)
	{
		int req[5] = {0};

		//tamanho = strlen(senha); //primeira opção - contando o tamanho da senha digitada
		for(tamanho = 0; senha[tamanho] != 0; tamanho++); //segunda opção - contando o tamanho da senha digitada
			/*10% de erro independente do linha utilizada acima para contar quantos caracteres foram digitados.*/

		for (i = 0; i < tamanho; ++i)//verifica os prerequisitos da senha
			{
				if(senha[i] >= 65 && senha[i] <= 90) ++maisculas; //verificando quantas sao maisculas
				else if(senha[i] >= 97 && senha[i] <= 122) ++minusculas; //verificando quantas sao minusculas
				else if(senha[i] >= 48 && senha[i] <= 57) ++numeros; //veriricando quantas sao numeros
				else ++proibidos; //restos sao caracteres proibidos, acento, etc.
			}
		if (maisculas && minusculas && numeros > 0 && tamanho >= 6 && tamanho <= 32 && proibidos == 0) //caso tenha todas os prerequisitos retorna senha valida
			{
				printf("Senha valida.\n");
			}
		else //senao retorna senha invalida
			{
				printf("Senha invalida.\n"); 
			}
	}

	return 0;
}
