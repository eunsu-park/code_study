// p.326
#include <stdio.h>

int main()
{
    int List[5][5] = { 0 };
    int x = -1, y = 0, Counter = 0;
    int i = 0, j = 0, Length = 9, Direction = 1;

    for (Length = 9; Length > 0; Length -= 2)
    {
        for (i = 0; i < Length; ++i)
        {
            if (i < Length / 2 + 1) x += Direction;
            else                    y += Direction;

            List[y][x] = ++Counter;
        }

        Direction = -Direction;
    }

    for (i = 0; i < 5; ++i)
    {
        for (j = 0; j < 5; ++j)
            printf("%d\t", List[i][j]);
        putchar('\n');
    }

    return 0;
}  