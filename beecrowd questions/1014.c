
#include <stdio.h>

int main(void){
    float distancia = 0, gasolina = 0;
    scanf("%f %f", &distancia, &gasolina);
    printf("%.3f km/l\n", distancia / gasolina);
    return 0;
}