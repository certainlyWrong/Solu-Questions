
#include <stdio.h>

int main(void){

    int testes, i = 0, range = 2;
    scanf("%d", &testes);
    while (testes > 0){
        scanf("%d", &i);
        while (range < i){
            if (i == 1){
                printf("%d nao eh primo\n", i);
                break;
            }
            else if (i % range == 0){
                printf("%d nao eh primo\n", i);
                break;
            }
            range++;
        }
        if (i == 1)printf("%d nao eh primo\n", i);
        else if (range >= i) printf("%d eh primo\n", i);
        testes--; range = 2;
    }
    return 0;
}