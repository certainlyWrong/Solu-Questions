
#include <stdio.h>

int main(void)
{
    int n = 0, i = 0, j = 0, leds = 0, array[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    scanf("%d", &n);

    for (i = 0; i < n; i++, j = 0, leds = 0)
    {
        char num[1110];
        scanf("%s", num);

        while (num[j] != '\0')
        {
            leds += array[num[j] - '0'];
            j++;
        }
        printf("%d leds\n", leds);
    }
    return 0;
}