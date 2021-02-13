// adriano r. de sousa

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    double n1, n2, n3;
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    printf("MEDIA = %.1lf\n", (n1 * 2 + n2 * 3 + n3 * 5)/10);
    return 0;
}