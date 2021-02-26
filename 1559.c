#include <stdio.h>

#define TAM 4

typedef struct 
{
    int move[TAM], win;
    char move_n[TAM][10];
} peca;

int main(void)
{
    int cases, i, j, k;
    scanf("%d", &cases);

    for ( i = 0; i < cases; i++)
    {
        int array[TAM][TAM];
        peca partida = {{0, 0, 0, 0}, 0, {"DOWN", "LEFT", "RIGHT", "UP"}};

        for ( j = 0; j < TAM; j++)
        {
            for ( k = 0; k < TAM; k++)
            {
                scanf("%d", &array[j][k]);
                if (array[j][k] == 2048)
                    partida.win = 1;
            }
        }
        
        for ( j = 0; j < TAM && (partida.move[0] == 0 || partida.move[1] == 0 || partida.move[2] == 0 || partida.move[3] == 0) && partida.win == 0; j++)
        {
            for ( k = 0; k < TAM && (partida.move[0] == 0 || partida.move[1] == 0 || partida.move[2] == 0 || partida.move[3] == 0); k++)
            {
                if (array[j][k] == 0)
                    continue;
                if (j - 1 >= 0 && (array[j-1][k] == array[j][k] || array[j-1][k] == 0))
                    partida.move[3] = 1;
                if (j + 1 <= 3 && (array[j+1][k] == array[j][k] || array[j+1][k] == 0))
                    partida.move[0] = 1;
                if (k - 1 >= 0 && (array[j][k-1] == array[j][k] || array[j][k-1] == 0))
                    partida.move[1] = 1;
                if (k + 1 <= 3 && (array[j][k+1] == array[j][k] || array[j][k+1] == 0))
                    partida.move[2] = 1;
            }
        }
        if ((partida.move[0] == 0 && partida.move[1] == 0 && partida.move[2] == 0 && partida.move[3] == 0) || partida.win == 1)
            printf("NONE\n");
        else
        {
            for ( j = 0; j < TAM; j++)
            {
                if (partida.move[j] == 1)
                    k = j;
            }
            
            for ( j = 0; j < TAM; j++)
            {
                if (k == j)
                {
                    printf("%s\n", partida.move_n[j]);
                    break;
                }
                else if (partida.move[j] == 1)
                    printf("%s ", partida.move_n[j]);
            }
        }
    }
    return 0;
}