#include <stdio.h>
#include <math.h>

#define pi 3.14159

int main(void){
    double r;
    scanf("%lf", &r);
    printf("VOLUME = %.3lf\n", (4/3.0)*pi*pow(r, 3));
    return 0;
}