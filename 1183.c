#include <stdio.h>

#define TAM 4

int main(void)
{
    char O;
    scanf(" %c", &O);

    float M[TAM][TAM] = {}, soma = 0;

    int i = 0, j = 0;

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            scanf("%f", &M[i][j]);
            if (j >= (i + 1))
            {
                soma += M[i][j];
            }
        }
    }
    if(O == 'S'){
        printf("%.1f\n", soma);
    }
    else if(O == 'M'){
        printf("%.1f\n", soma/66);
    }
    return 0;
}