#include <stdio.h>
#include <stdbool.h>

int necessario_movi(int *ponto_0, int *ponto_1);

int main(void){
    int ponto[3][3] = {}, posicao = 1, distancia = 0, movimentos = 0, testes = 1, i = 0;
    bool a = false;

    scanf("%d", &distancia);
    for (i = 0; i < distancia; i++){
        scanf("%d %d %d", &ponto[0][0], &ponto[0][1], &ponto[0][2]);

        // if (ponto[0][0] == 0 && ponto[0][1] == 0 && ponto[0][2] == 0){
        //     continue;
        // }
        // else{
        //     ponto[1][0] = ponto[0][0];
        //     ponto[1][1] = ponto[0][1];
        //     ponto[1][2] = ponto[0][2];
        // }


    //     if(i >= 1){
    //         if (posicao == 1){
    //             if (ponto[0][1] == 0) continue;
    //             else{

    //             }
    //         }
    //     }
    // }

    return 0;
}

// int necessario_movi(int *ponto_0, int *ponto_1){
//     if (ponto_1 == 0)
//     {
//         /* code */
//     }
    
// }

// 1 0 0 = 1
// 1 1 0 = 0
// 0 1 0 = 2
// 0 1 1 = 0
// 0 0 1 = 1