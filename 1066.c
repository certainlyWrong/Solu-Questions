// adriano r. de sousa

#include <stdio.h>

int main(void)
{
    int i = 5, par = 0, impar = 0, positivo = 0, negativo = 0;
    while (i > 0)
    {
        int num = 0;
        scanf("%d", &num);
        if (num % 2 == 0)
            par++;
        else
            impar++;
        if (num > 0)
            positivo++;
        else if(num < 0)
            negativo++;
        i--;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, positivo, negativo);
    return 0;
}