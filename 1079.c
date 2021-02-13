// adriano r. de sousa

#include <stdio.h>

int main(void)
{
    int n = 0;
    scanf("%d", &n);

    while (n)
    {
        double a = 0, b = 0, c = 0;
        scanf("%lf %lf %lf", &a, &b, &c);
        printf("%.1lf\n", (a * 2 + b * 3 + c * 5)/10);
        n--;
    }

    return 0;
}