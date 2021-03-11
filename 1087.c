#include <stdio.h>

typedef struct 
{
    int x, y;
} point;

int move(point, point);

int main(void)
{
    point initial, final;
    scanf("%d %d %d %d", &initial.x, &initial.y, &final.x, &final.y);
    if (initial.x == 0 && initial.y == 0 && final.x == 0 && final.y == 0)
        return 0;
    
    printf("%d\n", move(initial, final));

    return main();
}

int move(point initial, point final)
{
    if (initial.x > final.x)
    {
        if (initial.y > final.y)
        {
            if (initial.x - final.x == initial.y - final.y)
                return 1;
            return 2;
        }
        if (initial.x - final.x == final.y - initial.y)
            return 1;
        if (final.y == initial.y)
            return 1;
        return 2;
    }
    else if (initial.x < final.x)
    {
        if (initial.y > final.y)
        {
            if (final.x - initial.x == initial.y - final.y)
                return 1;
            return 2;
        }
        if (final.x - initial.x == final.y - initial.y)
            return 1;
        if (final.y == initial.y)
            return 1;
        return 2;
    }
    if (initial.y == final.y)
        return 0;
    return 1;
}