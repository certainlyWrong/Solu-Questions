// adriano r. de sousa

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    char nome[20];
    double salario, vendas;
    scanf(" %s %lf %lf", &nome, &salario, &vendas);
    printf("TOTAL = R$ %.2lf\n", salario + vendas * 0.15);
    return 0;
}