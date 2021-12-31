#include <stdio.h>

int main(void)
{
    long long number = 0;
    int d = 0;
    scanf("%lld", &number);

    while (number > 0)
    {
        if (number % 10 == 7 || number % 10 == 4)
            d++;
        number /= 10;
    }

    printf(d == 7 || d == 4? "YES\n" : "NO\n");
    
    return 0;
}