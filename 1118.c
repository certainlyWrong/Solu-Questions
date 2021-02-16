#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool interruptor = true;

    while (interruptor)
    {
        float n1, n2;

        while (1)
        {
            scanf("%f", &n1);
            if (n1 >= 0 && n1 <= 10)
                break;
            printf("nota invalida\n");
        }

        while (1)
        {
            scanf("%f", &n2);
            if (n2 >= 0 && n2 <= 10)
                break;
            printf("nota invalida\n");
        }
        printf("media = %.2f\n", (n1 + n2) / 2);

        while (1)
        {
            int d;
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &d);
            if (d != 1 && d != 2)
                continue;

            if (d == 1)
                break;
            interruptor = false;
            break;
        }
    }
    return 0;
}
