#include <stdio.h>

int main(void){
    float valor = 0;
    int lanche = 0;
    scanf("%d %f", &lanche, &valor);
    switch (lanche)
    {
    case 1:
        valor *= 4.0;
        break;
    case 2:
        valor *= 4.5;
        break;
    case 3:
        valor *= 5.0;
        break;
    case 4:
        valor *= 2.0;
        break;
    case 5:
        valor *= 1.5;
        break;
    default:
        break;
    }
    printf("Total: R%c %.2f\n",36, valor);
    return 0;
}