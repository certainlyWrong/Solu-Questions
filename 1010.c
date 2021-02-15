
#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    int p1, p2, quantidade1, quantidade2;
    double valor1, valor2;
    scanf("%d %d %lf", &p1, &quantidade1, &valor1);
    scanf("%d %d %lf", &p2, &quantidade2, &valor2);
    printf("VALOR A PAGAR: R$ %.2lf\n", quantidade1 * valor1 + quantidade2 * valor2);
    return 0;
}