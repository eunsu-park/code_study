// p.322
#include <stdio.h>

int main()
{
    int List[5] = { 30, 40, 10, 50, 20 };
    int i = 0, j = 0, tmp = 0;

    for (i = 0; i < 4; ++i)
        for (j = i + 1; j < 5; ++j)
            if (List[j] < List[i])
            {
                tmp = List[i];
                List[i] = List[j];
                List[j] = tmp;
            }

    for (i = 0; i < 5; ++i)
    {
        printf("%d\t", List[i]);
    }
    putchar('\n');
            
    return 0;
}  