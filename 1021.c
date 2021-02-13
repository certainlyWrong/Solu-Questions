#include <stdio.h>

int main(void)
{
    double valor = 0, valor_notas_moedas[12] = {100, 50, 20, 10, 5, 2, 1, 0.5, 0.25, 0.1, 0.05, 0.01};
    int quantidade[12] = {}, i = 0;

    scanf("%lf", &valor);
    valor += 0.00111111;

    for (i = 0; i < 12; i++)
    {
        quantidade[i] = valor / valor_notas_moedas[i];
        valor = valor - ((double)quantidade[i] * valor_notas_moedas[i]);
    }

    printf("NOTAS:\n");
    for (i = 0; i < 6; i++)
        {printf("%d nota(s) de R%c %.2lf\n", quantidade[i], 36, valor_notas_moedas[i]);}
    
    printf("MOEDAS:\n");
    for (i = 6; i < 12; i++)
        {printf("%d moeda(s) de R%c %.2lf\n", quantidade[i], 36, valor_notas_moedas[i]);}
    
    return 0;
}
