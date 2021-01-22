#include <stdio.h>

#define TAM 100

int main(void){
	int i = 0;
    double N[TAM] = {}, numero = 0;
	scanf("%lf", &numero);
	for (i = 0; i < TAM; i++){
		N[i] = numero;
		printf("N[%d] = %.4lf\n", i, N[i]);
		//if(numero < 0.0001)continue;
		numero /= 2;
	}
	return 0;
}