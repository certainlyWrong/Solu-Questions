// adriano r. de sousa

#include <stdio.h>

int main(void)
{

    float salario = 0, reajuste = 0, percentual = 0;

    scanf("%f", &salario);

    if (salario > 0 && salario <= 400)
        percentual = 15;
    else if (salario > 400.01 && salario <= 800)
        percentual = 12;
    else if (salario > 800.01 && salario <= 1200)
        percentual = 10;
    else if (salario > 1200.01 && salario <= 2000)
        percentual = 7;
    else
        percentual = 4;

    reajuste = salario * percentual/100;
    salario += reajuste;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n", salario, reajuste, percentual);
    return 0;
}