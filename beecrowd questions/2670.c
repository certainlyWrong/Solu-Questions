
#include <stdio.h>

int compara_valor(int, int, int);

int main(void)
{
    int andar_1_2_3[3] = {}, fluxo[3] = {}, aux = 0;
    scanf("%d %d %d", &andar_1_2_3[0], &andar_1_2_3[1], &andar_1_2_3[2]);

    fluxo[0] = andar_1_2_3[1] * 2 + andar_1_2_3[2] * 4;
    fluxo[1] = andar_1_2_3[0] * 2 + andar_1_2_3[2] * 2;
    fluxo[2] = andar_1_2_3[1] * 2 + andar_1_2_3[0] * 4;
    printf("%d\n", compara_valor(fluxo[0], fluxo[1], fluxo[2]));
    return 0;
}

int compara_valor(int a, int b, int c)
{
    if (a<b)
        if(a<c)
            return a;
        else
            return c;
    else
        if (b<c)
            return b;
        else
            return c;
}