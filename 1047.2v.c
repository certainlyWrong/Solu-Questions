
#include <stdio.h>

int main(void)
{
    unsigned short int hora_min_inicial[2] = {}, hora_min_final[2] = {}, diferenca = 0;
    
    scanf("%hu %hu %hu %hu", &hora_min_inicial[0], &hora_min_inicial[1], &hora_min_final[0], &hora_min_final[1]);

    if (hora_min_inicial[0] == hora_min_final[0] && hora_min_final[1] == hora_min_inicial[1])
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24, 0);
    }
    else if (hora_min_inicial[0] == hora_min_final[0] && hora_min_inicial[1] < hora_min_final[1])
    {
        hora_min_final[0] = (hora_min_final[0] * 60) + hora_min_final[1];
        hora_min_inicial[0] = (hora_min_inicial[0] * 60) + hora_min_inicial[1];

        diferenca = hora_min_final[0] - hora_min_inicial[0];

        hora_min_inicial[0] = diferenca / 60;
        hora_min_inicial[1] = diferenca % 60;
        printf("O JOGO DUROU %hu HORA(S) E %hu MINUTO(S)\n", hora_min_inicial[0], hora_min_inicial[1]);
    }
    else
    {
        if (hora_min_inicial[0] < hora_min_final[0])
        {
            hora_min_final[0] = (hora_min_final[0] * 60) + hora_min_final[1];
            hora_min_inicial[0] = (hora_min_inicial[0] * 60) + hora_min_inicial[1];

            diferenca = hora_min_final[0] - hora_min_inicial[0];

            hora_min_inicial[0] = diferenca / 60;
            hora_min_inicial[1] = diferenca % 60;
        }
        else
        {
            hora_min_final[0] = (hora_min_final[0] * 60) + hora_min_final[1];
            hora_min_inicial[0] = (hora_min_inicial[0] * 60) + hora_min_inicial[1];

            diferenca = 1440 - hora_min_inicial[0] + hora_min_final[0];

            hora_min_inicial[0] = diferenca / 60;
            hora_min_inicial[1] = diferenca % 60;
        }
        printf("O JOGO DUROU %hu HORA(S) E %hu MINUTO(S)\n", hora_min_inicial[0], hora_min_inicial[1]);
    }
    return 0;
}