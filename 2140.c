// adriano r. de sousa

#include <stdio.h>

int main(void){
    int i = 0, pos_impos = 0, resto = 0, valores[15] = {7, 12, 22, 52, 102, 15, 25, 55, 105, 30, 60, 110, 70, 120, 150};
    int N = 0, M = 0;
    while (1){
        scanf("%d %d", &N, &M);
        if(N == 0 && M == 0)break;
        resto = M - N;
        while (1){
            if(resto == valores[i]){
                pos_impos++;
                break;
            }
            i++;
            if(i > 14) break;
        }
        if(pos_impos){printf("possible\n");}
        else{printf("impossible\n");}
        i = 0; pos_impos = 0;
    }
    return 0;
}