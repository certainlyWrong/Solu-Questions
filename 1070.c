
#include <stdio.h>

int main(void)
{
    int x = 0, i = 0;
    scanf("%d", &x);
    while (1)
    {
        if (x % 2 != 0)
        {
            printf("%d\n", x), i++;
            if(i >= 6) break;
        }
        x++;
    }
    return 0;
}