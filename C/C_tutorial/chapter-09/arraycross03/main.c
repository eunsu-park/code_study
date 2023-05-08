// p.310
#include <stdio.h>

int main()
{
    int List[5][5] = { 0 };
    int i = 0, j = 0, Counter = 0, Offset = 1;



    for (i = 0; i < 5; ++i)
    {
        if (i % 2 == 0) Counter = i * 5;
        else Counter = (i + 1) * 5 + 1;

        for (j = 0; j < 5; ++j)
        {
            Counter += Offset;
            List[i][j] = Counter;
        }
        Offset = -Offset;
    }

    for (i = 0; i < 5; ++i)
    {
        for (j=0; j<5; ++j)
            printf("%d\t", List[i][j]);
        putchar('\n');
    }
        
    return 0;
}