// adriano r. de sousa

#include <stdio.h>

int main(){
    int i = 0, soma, n1 = 0, n2 = 1;
    scanf("%d", &i);
    while(i > 0){
        if (i > 1) printf("%d ", n1);
        else printf("%d\n", n1);
        soma = n1 + n2;
        n1 = n2;
        n2 = soma;
        i--;
    }
    return 0;
}