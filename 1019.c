#include <stdio.h>
 
int main() {
 
     int N, horas, minutos, segundos, hora_segundos;
  hora_segundos = 3600;
  scanf("%d", &N);
  horas = (N / hora_segundos);
  minutos = ((N - (hora_segundos * horas))/60);
  segundos = ((N - (hora_segundos * horas)) - (minutos * 60));
  printf("%d:%d:%d\n", horas, minutos, segundos);
 
    return 0;
}
