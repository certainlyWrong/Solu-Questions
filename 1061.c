#include <stdio.h>

int main(void)
{
    int dias[3] = {}, horas[3] = {}, minutos[3] = {}, segundos[3] = {}, segundos_total = 0;
    char lixo[5] = "";

    scanf("%s %d %d %s %d %s %d", lixo, &dias[0], &horas[0], lixo, &minutos[0], lixo, &segundos[0]);
    scanf("%s %d %d %s %d %s %d", lixo, &dias[1], &horas[1], lixo, &minutos[1], lixo, &segundos[1]);

    segundos_total = ((((dias[1] * 24 + horas[1]) * 60) + minutos[1]) * 60) + segundos[1];
    segundos_total -= ((((dias[0] * 24 + horas[0]) * 60) + minutos[0]) * 60) + segundos[0];

    minutos[2] = segundos_total / 60;
    segundos[2] = segundos_total % 60;
    horas[2] = minutos[2] / 60;
    minutos[2] = minutos[2] % 60;
    dias[2] = horas[2] / 24;
    horas[2] = horas[2] % 24;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dias[2], horas[2], minutos[2], segundos[2]);
    return 0;
}