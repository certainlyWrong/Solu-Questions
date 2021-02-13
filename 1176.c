// adriano r. de sousa

#include <stdio.h>

void fib_f(long long int *fib, long long int casos);

int main(void)
{
    long long int i = 0, casos = 0;

    scanf("%lld", &casos);

    long long int fib[casos];

    for (i = 0; i < casos; i++)
        scanf("%lld", &fib[i]);

    fib_f(fib, casos);
    
    return 0;
}

void fib_f(long long int *fib, long long int casos)
{
    long long int i = 0, j = 0, num_1 = 0, num_2 = 0, num_3 = 0;

    for (i = 0; i < casos; i++)
    {
        if (fib[i] == 1)
            num_3 = 1;
        else
        {
            for (j = 0, num_1 = 0, num_2 = 1, num_3 = 0; j < fib[i] - 1; j++)
            {
                num_3 = num_1 + num_2;
                num_1 = num_2;
                num_2 = num_3;
            }
        }
        printf("Fib(%lld) = %lld\n", fib[i], num_3);
    }
}