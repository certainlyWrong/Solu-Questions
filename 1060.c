#include <stdio.h>

int main(void)
{   
    int i = 0, positivos = 0;
    float numero_scan = 0;
    for (i = 0; i < 6; i++, numero_scan = 0)
    {
        scanf("%f", &numero_scan);
        if (numero_scan > 0)
            positivos++;
    }
    printf("%d valores positivos\n", positivos);
    return 0;
}