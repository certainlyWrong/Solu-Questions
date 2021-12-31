#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
    int n;
    scanf("%d", &n);
    int array[n][n], i, j;
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &array[i][j]);
    }

    int somaL = 0, somaC = 0, diago1 = 0, diago2 = 0, constante = 0, validar = TRUE;


    for (i = 0; i < n && validar == TRUE; i++)
    {
        if (i == 0)
        {
            for ( j = 0; j < n; j++)
                constante += array[i][j];
        }
      
        for (j = 0, somaL = 0, somaC = 0; j < n; j++)
        {
            somaL += array[i][j];
            somaC += array[j][i];
        }
        
        diago1 += array[i][i];
        diago2 += array[i][n-i-1];
        if (i != 0 && (somaL != constante || somaC != constante))
            validar = FALSE;

    }
    
    if (validar && diago1 == constante && diago2 == constante)
    {
        printf("%d\n", constante);
        return 0;
    }
    printf("%d\n", -1);
    return 0;
}