
#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "portuguese");
    float salario = 0, salario_aux = 0, imposto = 0;

    scanf("%f", &salario);
    salario_aux = salario;
    if (salario <= 2000)
    {
        printf("Isento\n");
    }
    else if (salario >= 2000.01 && salario <= 3000)
    {
        salario_aux -= 2000;
        imposto = salario_aux * 0.08;
        printf("R$ %.2f\n", imposto);
    }
    else if (salario >= 3000.01 && salario <= 4500)
    {
        salario_aux -= 2000;
        if (salario_aux > 1000)
            imposto = (salario_aux - 1000) * 0.18 + 1000 * 0.08;
        else
            imposto = salario_aux * 0.08;
        printf("R$ %.2f\n", imposto);
    }
    else
    {
        salario_aux -= 4500.00;
        imposto = (1000 * 0.08) + (1500 * 0.18) + (salario_aux * 0.28);
        printf("R$ %.2f\n", imposto);
    }
    return 0;
}