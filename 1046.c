#include <stdio.h>
int main() 
{
    int horainicio, horafinal, A;
    scanf("%d %d",&horainicio,&horafinal);

    if(horainicio<horafinal) 
    {
        A = horafinal-horainicio;
        printf("O JOGO DUROU %d HORA(S)\n",A);
    } 
    else if(horainicio>horafinal)
    {
        A = (24-horainicio)+horafinal;
        printf("O JOGO DUROU %d HORA(S)\n",A);
    }
    if(horainicio==horafinal)
    {
        A = 24;
        printf("O JOGO DUROU %d HORA(S)\n",A);
    }
    
    return 0;
}
