// adriano r. de sousa

#include <stdio.h>

int main(void){
    float a = 0, b = 0, c = 0;
    scanf("%f %f %f", &a, &b, &c);
    //agora vou levar a serio
    if (a>=b+c || b>=a+c || c>=b+a) printf("Area = %.1f\n", ((a+b)*c)/2);
    else printf("Perimetro = %.1f\n", a+b+c);
    return 0;
}