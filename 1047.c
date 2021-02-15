
#include <stdio.h>

int main(void)
{
    unsigned short int hora_min_inicial[2] = {}, hora_min_final[2] = {}, horas = 0, min = 0;
    
    scanf("%hu %hu %hu %hu", &hora_min_inicial[0], &hora_min_inicial[1], &hora_min_final[0], &hora_min_final[1]);
    
    if (hora_min_final[1] > hora_min_inicial[1])
    {
        if (hora_min_final[0] > hora_min_inicial[0])
        {
            horas = hora_min_final[0] - hora_min_inicial[0];
            min = hora_min_final[1] - hora_min_inicial[1];
        }
        else if(hora_min_inicial[0] > hora_min_final[0])
        {
            horas = 24 - hora_min_inicial[0] + hora_min_final[0];
            min = hora_min_final[1] - hora_min_inicial[1];
        }
        else
        {
            horas = 0;
            min = hora_min_final[1] - hora_min_inicial[1];
        }
    }
    else if (hora_min_inicial[1] > hora_min_final[1])
    {
        if (hora_min_final[0] > hora_min_inicial[0])
        {
            min = 60 - hora_min_inicial[1] + hora_min_final[1];
            if (min > 59)
            {
                horas++;
                min -= 60;
            }
            horas = (-1) + hora_min_final[0] - hora_min_inicial[0];
        }
        else if(hora_min_inicial[0] > hora_min_final[0])
        {
            min = 60 - hora_min_inicial[1] + hora_min_final[1];
            horas = 23 - hora_min_inicial[0] + hora_min_final[0];
        }
        else
        {
            horas = 23;
            min = 60 - hora_min_inicial[1] + hora_min_final[1];
        }
    }
    else
    {
        horas = 24;
        min = 0;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, min);
    return 0;
}