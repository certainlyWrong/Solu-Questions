#include <stdio.h>

int main(void){
    int x = 0, y = 0, soma = 0;
    scanf("%d %d", &x, &y);
    if (x >= y){x = x; y = y;}
    else{soma = y; y = x; x = soma; soma = 0;}
    while (x >= y){
        if (y % 13 != 0){
            soma += y;
        }
        y++;
    }
    printf("%d\n", soma);
    return 0;
}