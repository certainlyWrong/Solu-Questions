#include <stdio.h>

int tipoPaisagem(int *, int);

int main(void)
{
    int tam, i;
    scanf("%d", &tam);
    int array[tam];
    for (i = 0; i < tam; i++)
        scanf("%d", &array[i]);

    printf("%d\n", tipoPaisagem(array, tam));
    
    return 0;
}

int tipoPaisagem(int padrao[], int tamanho)
{
    int true_false = 1, i;
    if(tamanho > 1){
		if (tamanho == 2 && padrao[0] == padrao[1])
			true_false = 0;
		else{
			for (i = 1; i < tamanho - 1; i++){
				if (padrao[i - 1] >= padrao[i] && padrao[i] >= padrao[i + 1]){
					true_false = 0;
					break;
				}
				else if (padrao[i - 1] <= padrao[i] && padrao[i] <= padrao[i + 1]){
					true_false = 0;
					break;
				}
			}
		}
	}
    if (true_false == 1)
        return 1;
    return 0;
}