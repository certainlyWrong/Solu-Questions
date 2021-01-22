#include <stdio.h>

int main(void)
{
    char letra = '\0';
    scanf(" %c", &letra);
    printf("%d\n", letra - 64);
    return 0;
}