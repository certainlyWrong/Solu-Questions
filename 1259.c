#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

int compare1 (const void * a, const void * b)
{
    if ( *(ll*)a % 2 == 0 && *(ll*)b % 2 != 0) return -1;
    if ( *(ll*)a % 2 != 0 && *(ll*)b % 2 == 0) return 1;
}

int compare2 (const void * a, const void * b)
{
    if ( *(ll*)a % 2 == 0 && *(ll*)b % 2 == 0)
    {
        if (*(ll*)a < *(ll*)b)
            return -1;
        return 1;
    }
    if ( *(ll*)a % 2 != 0 && *(ll*)b % 2 != 0)
    {
        if (*(ll*)a < *(ll*)b)
            return 1;
        return -1;
    }
}

int main(void)
{
    
    ll N;
    scanf("%lld", &N);
    ll array[N], i;

    for ( i = 0; i < N; i++)
        scanf("%lld", &array[i]);
    
    // mais eficiente do que realizar um qsort com todas as comparações
    qsort(array, N, sizeof(ll), compare1);
    qsort(array, N, sizeof(ll), compare2);

    for ( i = 0; i < N; i++)
        printf("%lld\n", array[i]);

    return 0;
}
