#include <stdio.h>

typedef unsigned long long ull;

int main(void)
{
    ull v = 0, n = 0, total = 0, i = 10;

    scanf("%llu %llu", &v, &n);
    total = v * n;

    while (i <= 90)
    {
        double valor = 0;
        int valor_aux = 0;
        valor = (double)i * total / 100;
        valor_aux = (int)valor;
        valor == valor_aux ? valor_aux : valor_aux++;
        printf("%d", valor_aux);
        printf(i != 90? " " : "");
        i += 10;
    }
    printf("\n");
    
    return 0;
}