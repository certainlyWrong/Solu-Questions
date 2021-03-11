#include <stdio.h>
#include <math.h>

int main(void)
{
    static int i = 1;

    int num;
    scanf("%d", &num);
    if (num == 0)
        return 0;

    printf("Teste %d\n%.0f\n\n", i++, pow(2, num) - 1);
    return main();
}
