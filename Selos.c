#include <stdio.h>
#include <math.h>

typedef long long ll;

char yesNO(ll, ll);

int main(void)
{
    ll n;
    scanf("%lld", &n);

    if (n < 4)
    {
        printf("N\n");
        return 0;
    }
    
    printf("%c\n", yesNO(n, (ll)sqrtl(n)));
    
    return 0;
}

char yesNO(ll n, ll root)
{
    static ll i = 2;
    if (i > root)
        return 'N';
    else if (n % i == 0)
        return 'S';
    i++;
    return yesNO(n, root);
}