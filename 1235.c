#include <stdio.h>
#include <string.h>

int main()
{
    long long int casos = 0, tam = 0, i = 0, j = 0, K = 0;

    scanf("%lld", &casos);
    setbuf(stdin, NULL);

    for (i = 0; i < casos; i++)
    {
        char strings[110] = {};
        setbuf(stdin, NULL);
        scanf("%[^\n]s", strings);

        tam = strlen(strings);

        for (j = tam/2 - 1; j >= 0; j--)
            printf("%c", strings[j]);

        for (j = tam/2; j <= tam - 1; tam--)
            printf("%c", strings[tam - 1]);

        printf("\n");
    }
    return 0;
}