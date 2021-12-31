#include <stdio.h>

typedef long long ll;

int main()
{
    ll N;
    scanf("%lld", &N);
    ll array[N + 1], i;

    for(i = 1; i <= N; i++)
        scanf("%lld", &array[i]);

    i = 1;
    ll j = N, Alice = array[i], Bob = array[j], move_alice = 0, move_bob = 0;

    while(1)
    {
        if(Alice > Bob)
        {
            j--;
            Bob += array[j];
            move_bob++;
        }
        else if(Bob >= Alice)
        {
            i++;
            Alice += array[i];
            move_alice++;
        }
        if(i > j)
            break;
    }
    printf("%lld %lld\n", move_alice, move_bob);

    return 0;
}