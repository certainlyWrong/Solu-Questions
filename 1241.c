#include <stdio.h>
#define TAM 1000

int encaixa(const char *, const char *);
int myStrcmp(const char *, const char *);
int myStrlen(const char *);

int main(void)
{
    int testes;
    scanf("%d", &testes);
    while (testes--)
    {
        char string1[TAM], string2[TAM];
        scanf("%s %s", string1, string2);
        if (encaixa(string1, string2))
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
    }
    
    return 0;
}

int encaixa(const char *s1, const char *s2)
{
    int tam1 = myStrlen(s1),
        tam2 = myStrlen(s2);
    if (tam1 < tam2) return 0;

    if (myStrcmp(&(s1[tam1-tam2]), s2))
        return 0;
    else
        return 1;
}
int myStrcmp(const char *s1, const char *s2)
{
    int i;
    for (i = 0; s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0; i++){}
    return s1[i] - s2[i];
}
int myStrlen(const char *str)
{
    int i;
    for (i = 0; str[i] != 0; i++){}
    return i;
}