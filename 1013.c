
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a, b, c, resultado;
    scanf("%d %d %d", &a, &b, &c);
    resultado = (a+b+abs(a-b))/2;
    printf("%d eh o maior\n", (resultado+c+abs(resultado-c))/2);
    return 0;
}