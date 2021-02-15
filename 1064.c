
#include <stdio.h>

int main(void)
{
	int i = 0, positivos = 0;
	float media = 0;
	
	for(i = 0; i < 6; i++)
	{
		float valor = 0;
		scanf("%f", &valor);
		if(valor > 0)
		{
		 positivos++;
		 media += valor;
		}
	}

	printf("%d valores positivos\n%.1f\n", positivos,  media/positivos);
	
	return 0;
}
