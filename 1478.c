#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
	/*varios casos*/ 
	while (true)
	{
		int TAM = 0, i = 0, j = 0, k = 0, m = 0, numero = 0;
		scanf("%d", &TAM);
		/*interruptor*/ 
		if (TAM == 0) break;
		else
		{
			int matriz[TAM][TAM];
			for (i = 0, numero = 1; i < TAM; i++, numero = i + 1)
			{
				for (j = 0; j < TAM; j++, numero++)
				{
					if (i == j) numero = 1;			
					matriz[i][j] = numero;
				}
			}
			for (i = 0, m = TAM - 1; i < TAM; i++, m--)
			{
				for (j = 0, k = TAM - 1; j < TAM; j++, k--)
				{
					if (i > 0 &&  k > TAM - (i + 1))
					{
						matriz[i][j] = matriz[m][k];
					}
				}
			}
			for(i = 0; i < TAM; i++)
			{
				for(j = 0; j < TAM; j++)
				{
					if (j == 0)
					{
						printf("%3d", matriz[i][j]);
					}
					else
					{
						printf("%4d", matriz[i][j]);
					}
				}
				printf("\n");
			}
		}
		printf("\n");
	}
	return 0;
}