// adriano r. de sousa

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int total[6][2];
} mvsj;

int main(void)
{
    int n = 0, i = 0, j = 0, maria = 0, joao = 0;
    scanf("%d", &n);
    mvsj* vetor = (mvsj*)malloc(n * sizeof(mvsj));

    for (i = 0; i < n; i++, maria = 0, joao = 0)
    {
        for (j = 0; j < 6; j++)
        {
            scanf("%d %d", &vetor[i].total[j][0], &vetor[i].total[j][1]);
        }
    }

    for (i = 0; i < n; i++, maria = 0, joao = 0)
    {
        for (j = 0; j < 6; j++)
        {
            if (j < 3)
                joao += vetor[i].total[j][0] * vetor[i].total[j][1];
            else
                maria += vetor[i].total[j][0] * vetor[i].total[j][1];
        }
        printf(maria > joao? "MARIA\n" : "JOAO\n");
    }
    return 0;
}