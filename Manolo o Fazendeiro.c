#include <stdio.h>

int main(void)
{
    int dimensao;
    scanf("%d", &dimensao);
    int farm[dimensao][dimensao], i, j, k;

    for ( i = 0; i < dimensao; i++)
    {
        for ( j = 0; j < dimensao; j++)
            scanf("%d", &farm[i][j]);
    }
    
    int Q, colheita;
    scanf("%d", &Q);
    int ponto[Q][4];

    for ( i = 0, colheita = 0; i < Q; i++)
    {
        for ( j = 0; j < 4; j++)
            scanf("%d", &ponto[i][j]);

        for ( j = ponto[i][0] - 1; j < ponto[i][2]; j++)
        {
            for ( k = ponto[i][1] - 1; k < ponto[i][3]; k++)
            {
                colheita += farm[j][k];
                farm[j][k] = 0;
            }
        }
    }
    
    printf("%d\n", colheita);

    return 0;
}