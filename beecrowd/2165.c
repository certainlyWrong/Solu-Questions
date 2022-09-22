#include <stdio.h>
#include <string.h>
 
int main()
{
    char string[500];

    scanf("%[^\n]s", string);
    int tam = strlen(string);
    
    if(tam <= 140)
        printf("TWEET\n");
    else
        printf("MUTE\n");

    return 0;
}