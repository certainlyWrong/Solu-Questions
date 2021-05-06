#include <stdio.h>
#define TAM 12

double soma(double M[][TAM]);

int main(void)
{
    char operacao;
    scanf("%c", &operacao);

    double matriz[TAM][TAM];
    int i, j;
    for (i = 0; i < TAM; i++)
        for (j = 0; j < TAM; j++)
            scanf("%lf", &matriz[i][j]);
    
    if (operacao == 'S')
        printf("%.1lf\n", soma(matriz));
    else
        printf("%.1lf\n", soma(matriz)/30);

    return 0;
}

double soma(double M[][TAM])
{
    int i = 0, j = 0, x = 0;
    double somaa = 0;

    for (i = TAM - 1; i >= (TAM / 2) + 1; i--, x++)
		for (j = 0; j < TAM; j++)
			if (j >= x + 1 && j < TAM - (x + 1))
				somaa += M[i][j];
    return somaa;
}