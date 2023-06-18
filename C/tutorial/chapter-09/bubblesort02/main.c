// p.323
#include <stdio.h>

int main()
{
    int List[5] = { 30, 40, 10, 50, 20 };
    int i = 0, j = 0, tmp = 0;

    for (i = 4; i > 0; --i)
        for (j = 0; j < i; ++j)
            if (List[j] > List[j + 1])
            {
                tmp = List[j];
                List[j] = List[j + 1];
                List[j + 1] = tmp;
            }

    for (i = 0; i < 5; ++i)
    {
        printf("%d\t", List[i]);
    }
    putchar('\n');
            
    return 0;
}  