// p.286
#include <stdio.h>

int main()
{
    int List[4][2][3] = { 0 };
    int i = 0, j = 0, k = 0, Counter = 0;

    for (i = 0; i < 4; ++i)
    {
        printf("Plane number : %d\n", i);
        for (j = 0; j < 2; ++j)
        {
            for (k = 0; k < 3; ++k)
            {
                List[i][j][k] = ++Counter;
                printf("%d\t", List[i][j][k]);
            }
            putchar('\n');
        }
        putchar('\n');
    }
        
    return 0;
}