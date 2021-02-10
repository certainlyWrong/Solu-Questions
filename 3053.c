#include <stdio.h>

int main(void)
{
    char string[101];

    scanf("%[^\n]s", string);

    printf("%s\n", string);

    return 0;
}