
#include <stdio.h>

int main(void)
{
    int num1 = 0, num2 = 0;
    scanf("%d %d", &num1, &num2);
    if (num1 % num2 == 0 || num2 % num1 == 0)
        printf("Sao Multiplos\n");
    else printf("Nao sao Multiplos\n");
    return 0;
}