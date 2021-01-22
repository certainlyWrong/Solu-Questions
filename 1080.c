#include <stdio.h>

int main(void){
    int N = 0, maior = 0, contador = 1, i = 0;
    while (contador <= 100){
        scanf("%d", &N);
        if (i == 0){maior = N; i++;}
        else if(N > maior){maior = N; i = contador;}
        contador++;
    }
    printf("%d\n%d\n", maior, i);
    return 0;
}