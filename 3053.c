#include <stdio.h>

int main(void){
    int n_a = 0, n_b = 0, n_c = 0, movimentos = 0, jogadas = 0;
    char copo_abc = 'a';

    scanf("%d %c", &movimentos, &copo_abc);

    if (copo_abc == 'A')n_a++;
    else if (copo_abc == 'B')n_b++;
    else if (copo_abc == 'C')n_c++;

    do{
        scanf("%d", &jogadas);
        if (jogadas == 1 && n_a != n_b){            
            if (n_a > n_b){
                n_b = n_a;
                n_a = 0;
            }
            else{
                n_a = n_b;
                n_b = 0;
            }
        }
        else if (jogadas == 2 && n_b != n_c){
            if (n_b > n_c){
                n_c = n_b;
                n_b = 0;
            }
            else{
                n_b = n_c;
                n_c = 0;
            }
        }
        else if (jogadas == 3 && n_a != n_c){
            if (n_a > n_c){
                n_c = n_a;
                n_a = 0;
            }
            else{
                n_a = n_c;
                n_c = 0;
            }
        }
        jogadas = 0;
        movimentos--;
    }while (movimentos > 0);
    if (n_a != 0) printf("A\n");
    else if (n_b != 0) printf("B\n");
    else if (n_c != 0) printf("C\n");
    return 0;
    if (/* condition */)
    {
        /* code */
    }
    
}