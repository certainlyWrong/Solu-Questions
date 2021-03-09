#include <stdio.h>
#include <math.h>

int move(void);

int main(void)
{
    move();
    return 0;
}

int move(void)
{
    int num;
    static int i = 1;

    scanf("%d", &num);
    if (num != 0)
    {
        printf("Teste %d\n%.0f\n\n", i++, pow(2, num) - 1);
        return move();
    }
    return 0;
}