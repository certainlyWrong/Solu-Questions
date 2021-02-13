// adriano r. de sousa

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int t = 0, i = 0;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        long int PA = 0, PB = 0, ano = 0;
        float G1 = 0, G2 = 0;
        scanf("%ld %ld %f %f", &PA, &PB, &G1, &G2);
        while (true)
        {
            PA += (PA * G1/100);
            PB += (PB * G2/100);
            ano++;
            if (ano > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
            else if (PA > PB)
            {
                printf("%ld anos.\n", ano);
                break;
            }
        }
    }
    return 0;
}