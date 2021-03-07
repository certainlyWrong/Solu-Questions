#include <stdio.h>

typedef long long ll;

int main(void)
{
    ll N;
    scanf("%lld", &N);

    while (N--)
    {
        ll n, i, j, cont = 0;
        scanf("%lld", &n);
        ll array[n];

        for ( i = 0; i < n; i++)
            scanf("%lld", &array[i]);
        
        for ( i = 0; i < n; 1)
        {
            if (array[i] == i+1)
                i++;
            else
            {
                int aux = array[array[i]-1];
                array[array[i]-1] = array[i];
                array[i] = aux;
                cont++;
            }
        }
            
        printf("%lld\n", cont);
    }
    
    return 0;
}
