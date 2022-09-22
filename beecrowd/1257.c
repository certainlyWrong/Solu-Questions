#include <stdio.h>
#include <string.h>

int main(void)
{
    int cases, i, j, k;
    scanf("%d", &cases);

    for (i = 0; i < cases; i++)
    {
        int lines, hash = 0;
        scanf("%d", &lines);
        char infile[lines][55];

        for ( j = 0; j < lines; j++)
        {
            getchar();
            scanf("%[^\n]s", infile[j]);
            for ( k = 0; k < strlen(infile[j]); k++)
                hash += (infile[j][k] - 65) + j + k;
        }
        printf("%d\n", hash);
    }
    return 0;
}