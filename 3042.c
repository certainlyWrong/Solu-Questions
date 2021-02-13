// adriano r. de sousa

#include <stdio.h>

typedef struct
{
    int position, move;
} noel;

noel positionNoel(int, int*);

int main(void)
{
    while (1)
    {
        int range = 0, i = 0;
        scanf("%i", &range);
        noel noel = {1, 0}, noel_aux;

        if (range == 0) break;
        
        int array[range][3];

        for (i = 0; i < range; i++)
        {
            scanf("%d %d %d", &array[i][0], &array[i][1], &array[i][2]);

            if (array[i][0] == 0 && array[i][1] == 0 && array[i][2] == 0)
                continue;

            else if (array[i][noel.position] == 0)
                continue;
            
            else
            {
                noel_aux = positionNoel(noel.position, array[i]);
                noel.position= noel_aux.position;
                noel.move += noel_aux.move;
            }
        }
        printf("%d\n", noel.move);
    }
    return 0;
}

noel positionNoel(int position, int* array)
{
    noel local = {0, 0};
    if (position == 0)
    {
        if (array[1] == 0)
        {
            local.position = 1;
            local.move = 1;
            return local;
        }
        local.position = 2;
        local.move = 2;
        return local;
    }
    else if (position == 1)
    {
        if (array[0] == 0)
        {
            local.position = 0;
            local.move = 1;
            return local;
        }
        local.position = 2;
        local.move = 1;
        return local;
    }
    if (array[1] == 0)
        {
            local.position = 1;
            local.move = 1;
            return local;
        }
    local.position = 0;
    local.move = 2;
    return local;
}
