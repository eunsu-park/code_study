// p.309
#include <stdio.h>

int main()
{
    int List[5][5] = { 0 };
    int i = 0, j = 0, Counter = 0;

    for (i = 0; i < 5; ++i)
    {
        if (i % 2 == 0)
            for (j = 0; j < 5; ++j)
                List[i][j] = ++Counter;
        else
            for (j = 0; j < 5; ++j)
                List[i][4-j] = ++Counter;
    }

    for (i = 0; i < 5; ++i)
    {
        for (j=0; j<5; ++j)
            printf("%d\t", List[i][j]);
        putchar('\n');
    }
        
    return 0;
}