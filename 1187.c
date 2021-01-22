#include <stdio.h>

#define TAM 12

int main(void){
	double soma = 0, media = 0, matriz[TAM][TAM] =  {};
	int i = 0, j = 0;
	char operacao = '\0';
	scanf(" %c", &operacao);
	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			scanf("%lf", &matriz[i][j]);
		}
	}
	for (i = 0; i < (TAM / 2) - 1; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			if (j >= i + 1 && j < TAM - (i + 1))
			{
				if (operacao == 'S')
				{
					soma += matriz[i][j];
				}
				else if (operacao == 'M')
				{
					soma += matriz[i][j];
					media++;
				}
			}	
		}
	}
	if(operacao == 'S')printf("%.1lf\n", soma);
	else if(operacao == 'M')
	{
		media = soma / media;
		printf("%.1lf\n", media);
	}
	return 0;
}