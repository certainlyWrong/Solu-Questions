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
        ll root = checkRoot(var);
        if (root)
        {
            printf(checkPrime(root, (ll)sqrtl(root), 2)? "YES\n" : "NO\n");
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

int checkPrime(ll root, ll max, ll i)
{
    if (i > max)
        return 1;
    else if (root % i == 0)
        return 0;
    return checkPrime(root, max, ++i);
}