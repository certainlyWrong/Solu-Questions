#include <stdio.h>
#include <stdlib.h>

typedef unsigned short uns;
typedef struct 
{
    int exist, inicio, fim;
} sequen;

int compare (const void*, const void*);

sequen search(uns*, uns, uns);

sequen inter(uns*, uns);

int main(void)
{
    uns N;

    while (scanf("%hu", &N) != EOF)
    {
        uns* array = (uns*)malloc(sizeof(uns));

        unsigned int i, j, soma = 0;
        for ( i = 0, j = 0; i < N; i++)
        {
            int x, y;
            scanf("%u %u", &x, &y);
            soma += (y - x)+1;
            array = (uns*)realloc(array, soma * sizeof(uns));

            while (x <= y)
            {
                array[j] = x;
                x++;
                j++;
            }
        }
        scanf("%u", &j);

        qsort(array, soma, sizeof(uns), compare);

        if (j > array[soma-1])
        {
            printf("%u not found\n", j);
            continue;
        }
        
        sequen respo = search(array, soma, j);
        if (respo.exist == -1)
            printf("%u not found\n", j);
        else
            printf("%u found from %d to %d\n", j, respo.inicio, respo.fim);
        
    }
    
    return 0;
}

int compare (const void * a, const void * b)
{
    if (*(uns*)a > *(uns*)b)
            return 1;
        return -1;
}

sequen search(uns* array, uns tam, uns value)
{
	uns min = 0, mid = (tam + min)/2;
    sequen respo = {-1, 0, 0};

    while (1)
    {
        if (array[mid] <= value)
		{
			if (array[mid] == value || value == array[mid-1] || value == array[mid+1])
            {
                if (array[mid] == value)
                    return inter(array, mid);

                else if (array[mid-1] == value)
                    return inter(array, mid-1);

                else if (array[mid+1] == value)
                    return inter(array, mid+1);
            }

			else if (value != array[mid] && value > array[mid-1] && value < array[mid+1])
                return respo;

			min = mid;
			mid = (tam + min)/2;
		}
		else if (array[mid] >= value)
		{
			if (array[mid] == value || value == array[mid-1] || value == array[mid+1])
            {
                if (array[mid] == value)
                    return inter(array, mid);
                    
                else if (array[mid-1] == value)
                    return inter(array, mid-1);

                else if (array[mid+1] == value)
                    return inter(array, mid+1);   
            }

			else if (value != array[mid] && value > array[mid-1] && value < array[mid+1])
                return respo;

			tam = mid;
			mid = (tam + min)/2;
		}
    }
}

sequen inter(uns* array, uns mid)
{
    sequen respo = {1, mid, mid};
    int i = mid - 1, j = mid + 1;

    while (1)
    {
        if (array[i] == array[mid])
        {
            respo.inicio = i;
            i--;
        }
        else if (array[j] == array[mid])
        {
            respo.fim = j;
            j++;
        }
        else
            break;
    }
    return respo;
}