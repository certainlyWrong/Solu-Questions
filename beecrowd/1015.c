#include <stdio.h>
#include <math.h>

typedef struct 
{
    float x, y;
} Ponto;

float distancia(Ponto, Ponto);

int main(void)
{
    Ponto p[2];
    int i;
    for (i = 0; i < 2; i++)
        scanf("%f %f", &p[i].x, &p[i].y);
    
    printf("%.4f\n", distancia(p[0], p[1]));

    return 0;
}

float distancia(Ponto p1, Ponto p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}