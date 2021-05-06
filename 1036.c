#include <math.h>
#include <stdio.h>

typedef struct 
{
    float x1, x2;
} Raiz;

Raiz calculaRaiz(float, float, float);

int main(void)
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    float delta = b*b - 4 * a * c;
    if (delta < 0 || a == 0)
    {
        printf("Impossivel calcular\n");
        return 0;
    }
    
    Raiz resultado = calculaRaiz(a, b, c);

    printf("R1 = %.5f\nR2 = %.5f\n", resultado.x1, resultado.x2);

    return 0;
}

Raiz calculaRaiz(float a, float b, float c)
{
    float delta = b*b - 4 * a * c;
    Raiz retorno = {(-b + sqrt(delta))/(a*2),
                    (-b - sqrt(delta))/(a*2)};
    return retorno;
}