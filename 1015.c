
#include <stdio.h>
#include <math.h>

typedef struct
{
    double x, y;
} point;

double resultado(point*, point*);

int main(void){
    point ponto[2];
    
    scanf("%lf %lf %lf %lf", &ponto[0].x, &ponto[0].y, &ponto[1].x, &ponto[1].y);

    printf("%.4lf\n", resultado(&ponto[0], &ponto[1]));
    return 0;
}

double resultado(point*ponto_1, point*ponto_2)
{
    return sqrt(pow((*ponto_2).x - (*ponto_1).x, 2)+pow((*ponto_2).y - (*ponto_1).y, 2));
}