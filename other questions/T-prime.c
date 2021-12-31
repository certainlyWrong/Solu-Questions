#include <stdio.h>
#include <math.h>

typedef long long ll;

ll checkRoot(ll);

int checkPrime(ll, ll, ll);

int main(void)
{
    ll n;
    scanf("%lld", &n);

    while (n--)
    {
        ll var;
        scanf("%lld", &var);
        var = checkRoot(var);
        if (var)
        {
            printf(checkPrime(var, (ll)sqrtl(var), 2)? "YES\n" : "NO\n");
            continue;
        }
        printf("NO\n");
    }

    return 0;
}

ll checkRoot(ll n)
{
    double root = sqrtl(n);
    if (root == (ll)root && root != 1)
        return root;
    return 0;
}

int checkPrime(ll prime, ll root, ll i)
{
    if (i > root)
        return 1;
    else if (prime % i == 0)
        return 0;
    return checkPrime(prime, root, ++i);
}