// adriano r. de sousa

#include <stdio.h>

int main(void)
{
	unsigned long long n = 0, total = 0, position = 0;
	long long i = 0;
	scanf("%llu", &n);

	unsigned long long array[n];

	for (i = 0; i < n; i++)
		scanf("%llu", &array[i]), total += array[i];
	i = 0;
	while (i >= 0 && i < n)
	{
		if(i + 1 > position)
			position = i + 1;
		
		if(array[i] == 0) i--;

		else if(array[i] % 2 == 0)
			total--, array[i]--, i--;
		else
			total--, array[i]--, i++;
	}
	printf("%llu %llu\n", position, total);
	return 0;
}