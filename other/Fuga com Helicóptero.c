#include <stdio.h>

int main(void)
{
    int helicoptero, policia, fugitivo, sentido;
    scanf("%d %d %d %d", &helicoptero, &policia, &fugitivo, &sentido);

    while (1)
    {
        if (fugitivo == 15 && sentido == 1)
            fugitivo = 0;
        else if (fugitivo == 0 && sentido == -1)
            fugitivo = 15;
        else
            fugitivo += sentido;

        if (fugitivo == helicoptero)
        {
            printf("S\n");
            break;
        }
        else if (fugitivo == policia)
        {
            printf("N\n");
            break;
        }    
    }

    return 0;
}