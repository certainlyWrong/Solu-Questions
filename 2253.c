#include <stdio.h>
#include <string.h>

int main(void)
{
    char senha[50];
    while (scanf("%[^\n]s", senha) != EOF)
    {
        getchar();
        short tam = strlen(senha), validar = 1, maius = 0, minus = 0;
        
        if (tam < 6 || tam > 32)
            validar = 0;
        else
        {
            int i;
            for (i = 0; i < tam; i++)
            {
                if (senha[i] >= 'a' && senha[i] <= 'z')
                    maius = 1;
                else
                {
                    if (senha[i] >= 'A' && senha[i] <= 'Z')
                        minus = 1;
                    else
                        if (senha[i] >= '0' && senha[i] <= '9')
                            validar = 1;
                        else
                        {
                            validar = 0;
                            break;
                        }
                }
            }  
        }
        printf(validar == 1 && minus == 1 && maius == 1? "Senha valida.\n" : "Senha invalida.\n");
    }
    return 0;
}
