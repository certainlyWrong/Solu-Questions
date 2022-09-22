
#include <stdio.h>

int tamanho(long);

int main(void)
{
    while (1)
    {
        int num = 0, i = 0, j = 0;
        scanf("%d", &num);
        if (num == 0)
        break;
        
        long long matriz[num][num];

        for (i = 0, matriz[i][j] = 1; i < num; matriz[i][0] = matriz[i-1][0] * 2)
        {
            for (j = 0; j < num; j++)
            {
            if(j!=0)
            {
                matriz[i][j] = matriz[i][j-1] * 2;
            } 
            }
            i++;
        }
   
        for (i = 0; i < num; i++)
        {
            for (j = 0; j < num; j++)
            {
            
                if (j == 0)
                    printf("%*lld", tamanho(matriz[num-1][num-1]), matriz[i][j]);
                else
                    printf("%*lld", tamanho(matriz[num-1][num-1]) + 1, matriz[i][j]);       
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

int tamanho(long n)
{
    int a = 0;
    while (n > 0)
    {
        n/=10;
        a++;
    }
    return a;
}