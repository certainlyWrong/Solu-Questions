#include <stdio.h>
#include <math.h>

typedef struct
{
    double x, y;
} point;

double resultado(point, point);

int main(void){
    point p[2];
    
    scanf("%lf %lf %lf %lf", &p[0].x, &p[0].y, &p[1].x, &p[1].y);

    printf("%.4lf\n", resultado(p[0], p[1]));
    return 0;
}

double resultado(point p1, point p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}