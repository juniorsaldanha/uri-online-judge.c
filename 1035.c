#include <stdio.h>
 
int main() {
 
  int A, B, C, D, somacd, somaab, verifica1;
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);
  scanf("%d", &D);
  somacd = (C + D);
  somaab = (A + B);
  verifica1 = (A % 2);
  
  if((B > C) && (D > A) && (somacd > somaab) && (C && D > 0) && (verifica1 == 0))
    {
      printf("Valores aceitos\n");
    }
  else
    {
      printf("Valores nao aceitos\n");
    }
 
    return 0;
}
