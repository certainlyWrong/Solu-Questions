#include <stdio.h>

typedef long long ll;

int search(ll*, ll, ll, ll, ll);

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
			int res1 = search(array, array[i] + aux, 0, N, N);
			if (res1 == 0 || res1 == 2)
            {
                if (res1 == 2)
				    break;
                continue;
            }

			int res2 = search(array, array[i] + 2 * aux, 0, N, N);
			if (res2 == 0 || res2 == 2)
            {
                if (res2 == 2)
				    break;
                continue;
            }

			trian++;
		}
		printf("%d\n", trian);
	}
	return 0;
}

int search(ll* array, ll item,  ll start, ll end, ll N)
{
	int meio;
    if (start > end) return 0;
    else if (item > array[N-1]) return 2;
    else
    {
        meio = (start + end) / 2;
        if (item < array[meio]) return search(array, item, start, meio - 1, N);
        else
        {
            if (item > array[meio]) return search(array, item, meio + 1, end, N);
            else return 1;
        }
    }
}