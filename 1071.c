#include <stdio.h>

int soma_impares(int a, int b);

int main(void){
    int inteiro1, inteiro2, diferenca = 0;
    scanf("%d %d", &inteiro1, &inteiro2);
    if (inteiro1 > inteiro2) soma_impares(inteiro1, inteiro2);
    else soma_impares(inteiro2, inteiro1);
    return 0;
}
int soma_impares(int a, int b){
    int soma = 0, i = 0;
    i = a - b;
    while (i > 1){
        b++;
        if (b % 2 != 0){
            soma += b;
        }
        i--;
    }
    printf("%d\n", soma);
}