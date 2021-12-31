#include <stdio.h>

int main(void)
{
    while (1)
    {
        long long netos = 0, i = 0, j = 0;
        scanf("%lld", &netos);
        
        if (netos == 0)
            break;

        long long presentes = netos * 2, maiorValor = 0, menorValor = 0, array[presentes];
        
        for ( i = 0; i < presentes; i++)
            scanf("%lld", &array[i]);
      
        for (i = 0, j = presentes-1; i < netos && j >= netos; i++, j--)
        {
            if (array[i] + array[j] > maiorValor)
                maiorValor = array[i] + array[j];
            if (i == 0)
                menorValor = maiorValor;
            if (array[i] + array[j] < menorValor)
                menorValor = array[i] + array[j];
        }

        printf("%lld %lld\n", maiorValor, menorValor);
    }
    return 0;
}