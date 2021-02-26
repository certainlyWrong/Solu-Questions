#include <stdio.h>

int main(void)
{
    long long n_botas, i, j, cont_pares;
    scanf("%lld", &n_botas);
    par botas[n_botas];

    for (i = 0; i < n_botas; i++)
    {
        scanf("%hu %c", &botas[i].tam, &botas[i].lado);
        botas[i].validar = 0;
    }

    for (i = 0, cont_pares = 0; i < n_botas; i++)
    {
        if (botas[i].validar == 0)
        {
            for (j = 0; j < n_botas; j++)
            {
                if (botas[j].validar != 0)
                    continue;
                
                else if (botas[j].tam == botas[i].tam && botas[j].lado != botas[i].lado && j != i)
                {
                    cont_pares++;
                    botas[j].validar = 1;
                    break;
                }
            }
            botas[i].validar = 1;
        }
    }
    printf("%lld\n", cont_pares);
    return 0;
}
