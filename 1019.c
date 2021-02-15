
#include <stdio.h>

typedef struct
{
    int horas, minutos, segundos;
} time;

time retorna(int);

int main(void)
{
    int entrada = 0;
    
    scanf("%d", &entrada);

    printf("%d:%d:%d\n", retorna(entrada).horas, retorna(entrada).minutos, retorna(entrada).segundos);

    return 0;
}
time retorna(int seg_total)
{
    time convertido;
    convertido.horas = ((seg_total / 60) / 60);
    convertido.minutos = (seg_total / 60) % 60;
    convertido.segundos = seg_total % 60;
    return convertido;
}