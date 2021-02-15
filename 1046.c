
#include <stdio.h>

int main(void)
{
    int hora_inicial = 0, hora_final = 0, horas = 0;
    
    scanf("%d %d", &hora_inicial, &hora_final);
    
    if (hora_final > hora_inicial)
        horas = hora_final - hora_inicial;
    else horas = 24 - hora_inicial + hora_final;
    
    printf("O JOGO DUROU %d HORA(S)\n", horas);
    
    return 0;
}