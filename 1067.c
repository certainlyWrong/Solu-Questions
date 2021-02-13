// adriano r. de sousa

#include <stdio.h>

int main(void)
{
    int num = 0, i = 0;
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
        if (i % 2 != 0) printf("%d\n", i);
        
    return 0;
}