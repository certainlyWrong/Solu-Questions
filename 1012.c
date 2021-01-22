#include <stdio.h>
#include <locale.h>
#define pi 3.14159
int main(void){
    setlocale(LC_ALL, "Portuguese");
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", a*c/2, pi*c*c, ((a+b)*c)/2, b*b, a*b);
    return 0;
}