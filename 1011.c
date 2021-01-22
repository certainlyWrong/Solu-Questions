#include <stdio.h>
#include <locale.h>
#define pi 3.14159
int main(void){
    setlocale(LC_ALL, "Portuguese");
    double r;
    scanf("%lf", &r);
    printf("VOLUME = %.3lf\n", (4.0/3)*pi*r*r*r);
    return 0;
}