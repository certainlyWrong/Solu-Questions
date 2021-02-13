// adriano r. de sousa

#include <stdio.h>

int main(void)
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0, j = 0, m[n][n];;

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (n % 2 == 0)
                {
                    if (i == j)
                        m[i][j] = 1;
                    else if (j == n - (i + 1))
                        m[i][j] = 2;
                    else
                        m[i][j] = 3;
                }
                else
                {
                    if (i == n / 2 && j == n / 2)
                        m[i][j] = 2;
                    else if (i == j)
                        m[i][j] = 1;
                    else if (j == n - (i + 1))
                        m[i][j] = 2;
                    else
                        m[i][j] = 3;
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d", m[i][j]);
            }
                printf("\n");
        }
        
    }
    return 0;
}