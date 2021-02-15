
#include <stdio.h>

void proba_ganhar(int);

int main(void)
{
    long long int casos = 0;
    scanf("%lld", &casos);

    proba_ganhar(casos);
    
    return 0;
}

void proba_ganhar(int casos)
{
    int n = 0, ganhou = 0, i = 0;
    for (i = 0; i < casos; i++)
    {
        scanf("%d", &n);
        if (n != 1)
            ganhou++;
    }
    printf("%d\n", ganhou);

}