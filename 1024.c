#include <stdio.h>
#include <string.h>

int main(void)
{
    unsigned long long cases = 0;

    scanf("%llu", &cases);

    while (cases)
    {
        getchar();
        char string[1020] = {}, string_aux[1020] = {};
        scanf("%[^\n]s", string);
        int size_str = strlen(string), i = 0, j = 0;

        for (i = 0; i < size_str; i++)
        {
            if (string[i] >= 65 && string[i] <= 122)
                string[i] = string[i]+3;
            else
                string[i] = string[i];

            if (i <= size_str/2-1 && size_str % 2 == 0)
                string[i] = string[i]-1;
            else if (i <= size_str/2 && size_str % 2 != 0)
                string[i] = string[i]-1;
            
        }
        for (i = 0, j = size_str-1; i < size_str; i++, j--)
            string_aux[j] = string[i];
    
        printf("%s\n", string_aux);
        cases--;
    }
    return 0;
}