#include <stdio.h>
 
int main() {

  int valor, dia_ano, dia_mes, anos, meses, dias;
  scanf("%d", &valor);
  anos = (valor / 365);
  meses = ((valor - (anos * 365)) / 30);
  dias = (valor - ((anos * 365) + (meses * 30)));
  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);
 
    return 0;
}
