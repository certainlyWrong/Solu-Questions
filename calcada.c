#include <stdio.h>
#include <stdlib.h>

int mdc(int, int);

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int array[4], i;

        for ( i = 0; i < 4; i++)
            scanf("%d", &array[i]);
        
        printf("%d\n", mdc(abs(array[2] - array[0]), abs(array[3] - array[1]))+1);

    }
    return 0;
}

int mdc(int n1, int n2)
{
    if (n2 == 0)
        return n1;    
    return mdc(n2, n1 % n2);
}