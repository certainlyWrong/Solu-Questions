
#include <stdio.h>

int main(void){
    int n = 0, i = 1;
    scanf("%d", &n);
    while (i <= 10){
        printf("%d x %d = %d\n", i, n, i*n);
        i++;
    }
    return 0;
}