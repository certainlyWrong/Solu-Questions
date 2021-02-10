#include <stdio.h>
#include <string.h>

int main(void)
{
    long long cases = 0;
    scanf("%lld", &cases);
    setbuf(stdin, NULL);

    while(cases)
    {
        char string[101] = {};
        scanf("%[^\n]s", string);
        setbuf(stdin, NULL);

        int tam = strlen(string), i = 0, j = 0;

        for (i = tam/2-1; i >= 0; i--)
        {
            if (string[i] == ' ')
                string[i] = 32;
            printf("%c", string[i]);
        }
        for (i = tam-1; i >= tam/2; i--)
        {
            if (string[i] == ' ')
                string[i] = 32;
            printf("%c", string[i]);
        }
        printf("\n");
        cases--;
    }
    return 0;
}
