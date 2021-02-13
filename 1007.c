// adriano r. de sousa

#include<stdio.h>

int main(void){
    int a[4];
    scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
    printf("DIFERENCA = %d\n", a[0] * a[1] - a[2] * a[3]);
    return 0;
}