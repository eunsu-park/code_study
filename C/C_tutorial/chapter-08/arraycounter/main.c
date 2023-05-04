// p.281
#include <stdio.h>

int main()
{
    int List[3][4] = { 0 };
    int i = 0, j = 0, Counter = 0;

    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 4; ++j)
            List[i][j] = ++Counter;
    }

    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 4; ++j)
            printf("%d\t", List[i][j]);
        putchar('\n');
    }
    
    return 0;
}