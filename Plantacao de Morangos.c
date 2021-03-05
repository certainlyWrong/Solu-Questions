#include <stdio.h>

int main(void)
{
    int array[4], i;

    for ( i = 0; i < 4; i++)
        scanf("%d", &array[i]);

    if (array[0] * array[1] > array[2] * array[3])
        printf("%d\n", array[0] * array[1]);
    else
        printf("%d\n", array[2] * array[3]);
    
    return 0;
}