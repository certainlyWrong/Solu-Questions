#include <stdio.h>
#include <stdlib.h>

typedef unsigned short uns;
typedef struct
{
    int exist, inicio, fim;
} sequen;

int compare (const void*, const void*);

sequen search(uns*, uns, uns, uns);

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
        if (j < array[0] || j > array[soma-1])
        {
            printf("%u not found\n", j);
            continue;
        }
        sequen respo = search(array, j, 0, soma);
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

sequen search(uns* array, uns item, uns start, uns end)
 {
    int meio;
    sequen respo = {-1, 0, 0};
    if (start > end) return respo;
    else
    {
        meio = (start + end) / 2;
        if (item < array[meio]) return search(array, item, start, meio - 1);
        else
        {
            if (item > array[meio]) return search(array, item, meio + 1, end);
            else return inter(array, meio);
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