#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define troca(a, b) {int aux = b; b = a, a = aux;}

int main(void)
{
    int m = 0, n = 0, i = 0, aux_i = 0, j = 0, soma = 0, *array_m, *array_n;

    array_m = (int *)malloc(sizeof(int));
    array_n = (int *)malloc(sizeof(int));
    while (true)
    {
        scanf("%d %d", &m, &n);
        if (n == 0 || m == 0 || n < 0 || m < 0)
            break;
        array_m[i] = m;
        array_n[i] = n;
        i++;
        array_m = (int *)realloc(array_m, (i + 1) * sizeof(int));
        array_n = (int *)realloc(array_n, (i + 1) * sizeof(int));
    }

    for (aux_i = 0; aux_i < i; aux_i++, soma = 0)
    {
        if (array_n[aux_i] > array_m[aux_i])
            troca(array_m[aux_i], array_n[aux_i]);
        for (j = array_n[aux_i]; j <= array_m[aux_i]; j++)
        {
            printf("%d ", j);
            soma += j;
        }
        printf("Sum=%d\n", soma);
    }
    return 0;
}