// p.294
#include <stdio.h>

int main()
{
    int List[3][4] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    int i = 0, j = 0;

    for (i = 0; i < 2; ++i)
        for  (j = 0; j < 3; ++j)
        {
            List[i][3] += List[i][j];
            List[2][j] += List[i][j];
        }

    List[2][3] = List[0][3] + List[1][3];


    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 4; ++j)
            printf("%d\t", List[i][j]);
        putchar('\n');
    }
        
    return 0;
}