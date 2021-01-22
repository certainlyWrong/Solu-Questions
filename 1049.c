#include <stdio.h>
#include <string.h>

int main(void)
{
    char palavras[3][15] = {};
    scanf("%s %s %s", palavras[0], palavras[1], palavras[2]);

    if (strcmp(palavras[0], "vertebrado") == 0)
    {
        if (strcmp(palavras[1], "ave") == 0)
        {
            if (strcmp(palavras[2], "carnivoro") == 0)
                printf("%s\n", "aguia");
            else
                printf("%s\n", "pomba");
        }
        else
        {
            if (strcmp(palavras[2], "onivoro") == 0)
                printf("%s\n", "homem");
            else
                printf("%s\n", "vaca");
        }
    }
    else
    {
        if (strcmp(palavras[1], "inseto") == 0)
        {
            if (strcmp(palavras[2], "hematofago") == 0)
                printf("%s\n", "pulga");
            else
                printf("%s\n", "lagarta");
        }
        else
        {
            if (strcmp(palavras[2], "hematofago") == 0)
                printf("%s\n", "sanguessuga");
            else
                printf("%s\n", "minhoca");
        }
    }
    return 0;
}