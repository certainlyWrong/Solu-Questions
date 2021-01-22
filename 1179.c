#include <stdio.h>
#include <stdbool.h>

#define TAM 5

int main(void)
{
    int vetor_1[TAM] = {}, vetor_2[TAM] = {}, aux = 0, i = 0, j = 0, k = 0, par = 0, impar = 0;
    bool interruptor = false;
    for (j = 0; j < 3; j++, interruptor = false)
    {
        for (1;i < 15 && interruptor == false; i++, aux = 0)
        {
            scanf("%d", &aux);
            if (aux % 2 == 0)
            {
                vetor_2[par] = aux;
                par++;
            }
            else
            {
                vetor_1[impar] = aux;
                impar++;
            }
            if (par == 5 || impar == 5)
                interruptor = true;
        }
        for (k = 0; k < TAM && interruptor == true; k++)
        {
            if (par == 5)
            {
                printf("par[%d] = %d\n", k, vetor_2[k]);
                vetor_2[k] = 0;
                
            }   
            else
            {
                printf("impar[%d] = %d\n", k, vetor_1[k]);
                vetor_1[k] = 0;
            }
        }
        if(par == 5) par = 0;
        if(impar == 5) impar = 0;
        
        for (k = 0; k < TAM && interruptor == false; k++)
            if(vetor_1[k] != 0)printf("impar[%d] = %d\n", k, vetor_1[k]);
        for (k = 0; k < TAM && interruptor == false; k++)
            if(vetor_2[k] != 0)printf("par[%d] = %d\n", k, vetor_2[k]);
    }
    return 0;
}