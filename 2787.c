// adriano r. de sousa

#include <stdio.h>

int main(void){
    int L = 0, C = 0;
    scanf("%d %d", &L, &C);
    if (L % 2 == 0){
        if (C % 2 == 0) printf("1\n");
        else printf("0\n");
    }
    else{
        if (C % 2 == 0) printf("0\n");
        else printf("1\n");
    }
    return 0;
}