#include <stdio.h>
int main()
{
	long long int fatorM, fatorN;
	int M, N;


	while (scanf("%d%d", &M, &N) != EOF)
	{
		for(fatorM = 1; M > 1; --M)
			{
				fatorM = (long long int) fatorM * M;
			}
	
		for(fatorN = 1; N > 1; --N)
			{
				fatorN = (long long int) fatorN * N;
			}

		long long int soma = fatorM + fatorN;

		printf("%lld\n", soma);

	}
	    
    return 0;
}
