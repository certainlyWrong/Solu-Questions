
#include <stdio.h>

int main(void){
    int n = 0;
    char ho[3] = "Ho";
    scanf("%d", &n);
    while (n > 1){
        printf("%s ", ho);
        n--;
    }
    printf("%s!\n", ho);
    return 0;
}