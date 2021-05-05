#include <stdio.h>

typedef long long ll;

void preencheFibVetor(ll *, int);
void printFib(ll *, int);
ll fibResult(ll, ll, ll);

int main(void)
{
    int cases;
    scanf("%d", &cases);
    ll array[cases];

    preencheFibVetor(array, cases);

    return 0;
}

void preencheFibVetor(ll *fibVetor, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
        scanf("%lld", &fibVetor[i]);
    printFib(fibVetor, tamanho);
}

void printFib(ll *fibVetor, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
        printf("Fib(%lld) = %lld\n", fibVetor[i], fibResult(0, 1, fibVetor[i]));
}

ll fibResult(ll a, ll b, ll fib)
{
    if (fib == 0)
        return a;
    
    fibResult(a+b, a, --fib);
}