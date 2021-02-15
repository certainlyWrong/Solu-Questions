
#include <stdio.h>

int main(void)
{
    int horas = 0, velocidade = 0, distancia = 0;
    float litros = 0;
    scanf("%d %d", &horas, &velocidade);
    litros = (float)horas * velocidade / 12;
    printf("%.3f\n", litros);
    return 0;
}