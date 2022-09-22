
#include <stdio.h>

int main(void){
    int n = 0, i = 1;
    scanf("%d", &n);
    while(n > 0){
        
        printf("%d %d %d\n", i, i*i, i*i*i*1);
        i++; n--;
    }
    return 0;
}