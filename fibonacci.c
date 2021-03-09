#include <stdio.h>

typedef long long ll;

ll fibonacci(int, ll, ll);

int main(void)
{
    int n;
    scanf("%d", &n);
    
    printf("%lld\n", fibonacci(n, 0, 1));
    return 0;
}

ll fibonacci(int n, ll n1, ll n2)
{
    if (n == 0)
        return n2;

    return fibonacci(--n, n2, n1 + n2);
}