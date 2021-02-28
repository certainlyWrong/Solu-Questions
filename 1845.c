#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char text, conso[] = {"bjpsvxzBJPSVXZ"};
    int i, j;
    bool antF = false;

    while(scanf("%c", &text) != EOF)
    {
        bool print_caracter = true;

        if (text != 'f' && text != 'F')
        {
            for ( i = 0; i < 14 && print_caracter == true; i++)
            {
                if (text == conso[i] && i < 7)
                {
                    if (antF == true)
                    {
                        print_caracter = false;
                        break;
                    }
                    printf("f");
                    antF = true;
                    print_caracter = false;
                }
                else if (text == conso[i] && i < 14)
                {
                    if (antF == true)
                    {
                        print_caracter = false;
                        break;
                    }
                    printf("F");
                    antF = true;
                    print_caracter = false;
                }
            }
            if (print_caracter == true)
            {
                printf("%c", text);
                antF = false;
            }
            
        }
        else if (antF == false)
        {
            printf("%c", text);
            antF = true;
        }
    }
    return 0;
}
