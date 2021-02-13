// adriano r. de sousa

#include <stdio.h>

int main(void)
{
    int i = 5, par = 0;
    while (i > 0)
    {
        int num = 0;
        scanf("%d", &num);
        if (num % 2 == 0)
            par++;
        i--;
    }
    printf("%d valores pares\n", par);
    return 0;
}