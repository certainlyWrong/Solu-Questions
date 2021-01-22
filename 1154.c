#include <stdio.h>

int main(void){
    int idade = 0;
    float soma = 0.0, total_loops = 0.0;
    do{
        scanf("%d", &idade);
        if (idade < 0) break;
          soma += idade;
          total_loops++;
    } while (1);
    printf("%.2f\n", soma / total_loops);
    return 0;
}