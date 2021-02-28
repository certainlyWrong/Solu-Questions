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
    int area[Q][4];

    for ( i = 0, colheita = 0; i < Q; i++)
    {
        for ( j = 0; j < 4; j++)
            scanf("%d", &area[i][j]);

        for ( j = area[i][0] - 1; j < area[i][2]; j++)
        {
            for ( k = area[i][1] - 1; k < area[i][3]; k++)
            {
                colheita += farm[j][k];
                farm[j][k] = 0;
            }
        }
    }
    
    printf("%d\n", colheita);

    return 0;
}