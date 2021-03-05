#include <stdio.h>

typedef long long ll;

int search(ll*, ll, ll);

int main(void)
{
	ll N;
	while (scanf("%lld", &N) != EOF)
	{
		ll i, array[N];
		scanf("%lld", &array[0]);
		for ( i = 1; i < N; i++)
		{
			scanf("%lld", &array[i]);
			array[i] += array[i-1];
		}
		
		if (array[N-1] % 3 != 0)
		{
			printf("0\n");
			continue;
		}
		int trian = 0, aux = array[N-1]/3;
		for ( i = 0; i < N; i++)
		{
			int res1 = search(array, N-1, array[i] + aux);
			if (res1 == 0 || res1 == 2)
			{
				if (res1 == 0)
					continue;
				break;
			}
			int res2 = search(array, N-1, array[i] + 2 * aux);
			if (res2 == 0 || res2 == 2)
			{
				if (res2 == 0)
					continue;
				break;
			}
			trian++;
		}
		printf("%d\n", trian);
	}
	return 0;
}

int search(ll* array, ll tam, ll value)
{
	if (value > array[tam])
		return 2;
	
	ll min = 0, mid = (tam + min)/2;

	while (1)
	{
		if (array[mid] <= value)
		{
			if (array[mid] == value || value == array[mid-1] || value == array[mid+1])
				return 1;
			else if (value != array[mid] && value > array[mid-1] && value < array[mid+1])
				return 0;
			min = mid;
			mid = (tam + min)/2;
		}
		else if (array[mid] >= value)
		{
			if (array[mid] == value)
				return 1;
			else if (value != array[mid] && value > array[mid-1] && value < array[mid+1])
				return 0;
			tam = mid;
			mid = (tam + min)/2;
		}
	}
}