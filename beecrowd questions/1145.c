#include <stdio.h>

int main(void)
{
	int x, x_aux, y, i;
	scanf("%d%d", &x, &y);

	x_aux = x;

	for (i = 1; i <= y; i++)
	{
		if (i == x || i == y)
		{
			printf("%d\n", i);
			x+=x_aux;
			continue;	
		}
		printf("%d ", i);
	}

	return 0;
}
